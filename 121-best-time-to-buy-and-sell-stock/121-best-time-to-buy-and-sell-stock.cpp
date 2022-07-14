class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int n=prices.size();
        int profit=0;
        int sell=prices[n-1];
        
        for(int i=n-1;i>=0;i--)
        {
            profit=max(profit, sell-prices[i]);
            sell=max(sell, prices[i]);
        }
        
        return profit;
        
    }
};