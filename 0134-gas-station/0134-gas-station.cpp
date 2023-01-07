class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        
        int sum_gas=0;
        int sum_cost=0;
        
        for(int i=0;i<gas.size();i++)
        {
            sum_gas+=gas[i];
        }
        for(int j=0;j<cost.size();j++)
        {
            sum_cost+=cost[j];
        }
        
        if(sum_gas<sum_cost)
        {
            return -1;
        }
        
        int total=0;
        int res=0;
       for(int i=0;i<gas.size();i++)
       {
           total+=(gas[i] - cost[i]);
           
           if(total<0)
           {
               total=0;
               res=i+1;
           }
       }
        
        return res;
        
    }
};