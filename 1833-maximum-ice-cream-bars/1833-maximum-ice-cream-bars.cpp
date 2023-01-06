class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(), costs.end());
        
        
        int count=0;
        int i=0;
        while(i<costs.size() && coins>=0)
        {
            if(coins-costs[i]>=0)
            {
                count+=1;
                coins=coins-costs[i];
                i+=1;
            }
            else
            {
                i+=1;
            }
        }
        
        return count;
        
    }
};