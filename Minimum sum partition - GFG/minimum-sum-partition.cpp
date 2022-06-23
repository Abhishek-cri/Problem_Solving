// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  
  void subsetsum(int arr[], int range,vector<vector<bool>>&t, int n)
  {
      for(int i=0;i<n+1;i++)
      {
          for(int j=0;j<range+1; j++)
          {
              if(i==0)
              {
                  t[i][j]=false;
              }
              if(j==0)
              {
                  t[i][j]=true;
              }
          }
      }
      
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=range;j++)
          {
              if(arr[i-1]<=j)
              {
                  t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
              }
              else
              {
                  t[i][j]=t[i-1][j];
              }
          }
      }
      
  }
  
 
    

	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	  
	    int range=0;
	    for(int i=0;i<n;i++)
	    {
	        range+=arr[i];
	    }
	      vector<vector<bool>>t(n+1, vector<bool>(range+1));
	      vector<int>vec;
	    subsetsum(arr, range, t, n);
	     int mini= INT_MAX;
	    for(int i=range/2;i>=0;i--)
	    {
	        if(t[n][i]==true)
	        {
	            mini=i;
	            break;
	        }  
	        
	    }
	    

	    
	   
	   // int a=vec.back();
	    int ans=range-2*mini;
	   // for(int i=0;i<vec.size();i++)
	   // {
	   //     mini=min(mini, range-2*vec[i]);
	   // }
	    
	    return ans;
	    
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends