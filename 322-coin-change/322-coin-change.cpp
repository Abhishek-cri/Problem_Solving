class Solution {
public:
    int t[10010];
    int solve(vector<int>coins,int amount)
    {
        if(amount==0)
        {
            return 0;
        }
        
        if(t[amount]!=-1)
        {
            return t[amount];
        }   
        
        
        int ans=INT_MAX;
        for(int coin : coins)
        {
            if(amount-coin>=0)
               ans=min(ans+0LL, solve(coins,amount-coin)+1LL);
        }
        
        return  t[amount]=ans;
            
    }
    
    int coinChange(vector<int>& coins, int amount) {
        
    
      memset(t,-1,sizeof(t));
        
        int ans=solve(coins,amount);
        
       if(ans==INT_MAX)
       {
           return -1;
       }
       else
       {
           return ans;
       }   
        
    }
};