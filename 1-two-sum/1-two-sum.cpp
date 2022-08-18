class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      /*  int i=0;
        int j=nums.size()-1;
      
        while(i<nums.size()-1)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            else
            {
                j--;
            }
            
            if(i==j)
            {
                i++;
                j=nums.size()-1;
            
            }
        }
        
        return ans;
    }*/
      
        unordered_map<int,int>mp;
       
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                return {i,mp[target-nums[i]]};
            }
            mp[nums[i]]=i;
        }
      
        
        
        
     return {-1,-1}; 
    }
};