class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int pivot= prices[n-1];
        int diff1=0;
        
        int profit=0;
        
        for(int i=n-2;i>=0;i--)
        {
            
            
           if(prices[i+1]>prices[i])
           {
             profit+=prices[i+1]-prices[i];
           }
          
        }
        
        return profit;
        
    }
};