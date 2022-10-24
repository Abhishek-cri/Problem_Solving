class Solution {
public:
    long long minCost(vector<int>& num, vector<int>& cst) {
        
        vector<pair<int, int >>vec;
        
        for(int i=0;i<num.size();i++)
        {
            vec.push_back({num[i], cst[i]});
        }
        
         sort(vec.begin(), vec.end());
        
//          for(int i=0;i<num.size();i++)
//         {
//             cout<<vec[i].first<<" "<<vec[i].second<<endl;
            
//         }
        
        
        
     
        
        // nums.clear();
        // cost.clear();
        // for(auto it:vec)
        // {
        //    nums.push_back(it.first);
        //    cost.push_back(it.second); 
        // }
        vector<int>nums;
        vector<int>cost;
        for(int i=0;i<num.size();i++)
        {
            nums.push_back(vec[i].first);
            cost.push_back(vec[i].second);
        }
        
        
  
        
        long long sum=0;
    
        for(int i=0;i<nums.size();i++)
        {
            sum+=cost[i];
        }
    
        long long x=sum/2;
        
        // if(sum%2==0)
        // {
        //     x=(sum/2)+1;
        // }
        // else
        // {
        //     x=sum/2;
        // }
  
        long long y=0;
        int target=-1;
        for(int i=0;i<nums.size();i++)
        {
            y+=cost[i];
            
            if(y>=x)
            {
               target=nums[i];
                break;
            }
        }
        
 
        long long ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            ans+=abs((long long)target-(long long)nums[i])*((long long)cost[i]);
        }
        
        
        return ans;
        
        
    }
};