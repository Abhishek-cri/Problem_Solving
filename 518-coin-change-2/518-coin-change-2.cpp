class Solution {
public:
    
    int solve(int amount, vector<int>&coins, int n,vector<vector<int>>&dp)
    {
       // if (amount == 0) return 1;
        if(n==0)
        {
            return (amount%coins[0]==0);
        }
    
        
        if(dp[n][amount]!=-1)
        {
            return dp[n][amount];
        }
        // not take
    
        long nottake=solve(amount, coins,n-1,dp);
        
        // take
        long take=0;
        if(coins[n]<=amount)
           take=solve(amount-coins[n], coins,n,dp);
        
        return dp[n][amount]=take+nottake;
        
        
    }
    
    
    
    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();
        vector<vector<int>>vec(n+1,vector<int>(amount+1,-1));
       
        return solve(amount,coins,n-1,vec);
        
        
    }
};