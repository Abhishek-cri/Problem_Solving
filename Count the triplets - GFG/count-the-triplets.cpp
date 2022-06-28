// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    
	    int count=0;
	    
	    sort(arr,arr+n);
	    for(int i=n-1;i>=2;i--)
	    {
	        int left=0;
	        int right=i-1;
	        int sum=0;    
	        while(left<right)
	        {
	            sum=arr[left]+arr[right];
	            if(sum==arr[i])
	            {
	                
	                count+=1;
	                left+=1;
	                right-=1;
	            }
	            else if(sum<arr[i])
	            {
	                left++;
	            }
	            else
	            {
	                right--;
	            }
	        }
	    }
	    
	    return count;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends