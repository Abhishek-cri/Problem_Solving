class Solution {
public:
    
    int solve(vector<int>& coins,vector<int>&t, int amount)
    {
        if(amount==0) return 0;
        
        if(t[amount]!=-1)
        {
            return t[amount];
        }
        
        int ans=INT_MAX-1;
        for(int coin:coins)
        {
            if(amount-coin>=0)
            {
                ans=min(ans, 1+solve(coins,t,amount-coin));
            }
        }
        
        return t[amount]=ans;
        
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int>t(amount+1,-1);
        
        int ans=solve(coins,t,amount);
        
        return ans==INT_MAX-1?-1 : ans;
        
    }
};