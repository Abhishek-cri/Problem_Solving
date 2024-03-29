class Solution {
public:
    
    int solve(int n,vector<int>&dp,vector<int>& cost )
    {
        if(n<=1)
        {
            return dp[n]=cost[n];
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        
        return dp[n]=cost[n]+min(solve(n-1, dp, cost), solve(n-2,dp,cost));
        
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n+1,-1);
        
        int ans=min(solve(n-1,dp,cost), solve(n-2,dp,cost));
        return ans;
        
    }
};