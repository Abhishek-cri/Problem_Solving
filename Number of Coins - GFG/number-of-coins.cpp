// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int k=INT_MAX;
	 vector<vector<int>>t(M+1,vector<int>(V+1));
	 for(int i=0;i<M+1;i++)
	 {
	     for(int j=0;j<V+1;j++)
	     {
	         if(i==0)
	         {
	             t[i][j]=k-1;
	         }
	         if(j==0)
	         {
	             t[i][j]=0;
	         }
	     }
	 }
	 
	 for(int j=1;j<=V;j++)
	 {
	     if(j%coins[0]==0)
	     {
	         t[1][j]=j/coins[0];
	     }
	     else
	     {
	         t[1][j]=k-1;
	     }
	 }
	 
	 for(int i=2;i<=M;i++)
	 {
	     for(int j=1;j<=V;j++)
	     {
	         if(coins[i-1]<=j)
	         {
	             t[i][j]=min(1 + t[i][j-coins[i-1]], t[i-1][j]);
	         }
	         else
	         {
	             t[i][j]=t[i-1][j];
	         }
	     }
	 }
	 
	 if(t[M][V]==k-1)
	 {
	     return -1;
	 }
	 return t[M][V];   
	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends