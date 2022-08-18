class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0;
        int j=nums.size()-1;
        vector<int>ans;
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
    }
};