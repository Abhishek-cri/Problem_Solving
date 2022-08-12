class Solution {
public:
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1));
        int x=INT_MAX-1;    
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(i==0)
                {
                  dp[i][j]=x;
                }
                if(j==0)
                {
                    dp[i][j]=0;
                }
            }
        }  
            
            for(int j=1;j<=amount;j++)
            {
                if(j%coins[0]==0)
                {
                    dp[1][j]=j/coins[0];
                }
                else
                {
                    dp[1][j]=x;
                }
            }
            
            
            for(int i=2;i<=n;i++)
            {
                for(int j=1;j<=amount;j++)
                {
                    if(coins[i-1]<=j)
                    {
                        dp[i][j]=min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            
            if(dp[n][amount]==x)
            {
                return -1;
            }
            return dp[n][amount];
    }
};