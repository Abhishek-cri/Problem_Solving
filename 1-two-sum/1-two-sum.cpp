class Solution {
public:
    
    
    
    vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
        vector<int>ans;
        int i=0;
        int j=n-1;
        
        while(i<=n-2)
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
            if(j<=i)
            {
                j=n-1;
                i++;
            }
        }
        
        return ans;
    }
};