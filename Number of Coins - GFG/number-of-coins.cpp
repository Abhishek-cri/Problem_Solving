//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int solve(int coins[],int M, int V, vector<vector<int>>&dp)
	{
	    if(M==0)
	    {
	        return INT_MAX-1;
	    }
	    if(V==0)
	    {
	        return 0;
	    }
	    if(M==1)
	    {
	        if(V%coins[M-1]==0)
	        {
	            return V/coins[M-1];
	        }
	        else
	        {
	            return INT_MAX-1;
	        }
	    }
	    
	   if(dp[M][V]!=-1)
	   {
	       return dp[M][V];
	   }
	    
	    int take=INT_MAX-1;
	    if(coins[M-1]<=V)
	    {
	        take=1+solve(coins, M,V-coins[M-1], dp);
	    }
	    int nottake=solve(coins, M-1,V, dp);
	    
	    return dp[M][V]=min(take, nottake);
	    
	    
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	 if(solve(coins, M, V, dp)==INT_MAX-1)
	 {
	     return -1;
	 }
	 else
	 {
	     return solve(coins, M, V, dp);
	 }
	    
	} 
	  
};

//{ Driver Code Starts.
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