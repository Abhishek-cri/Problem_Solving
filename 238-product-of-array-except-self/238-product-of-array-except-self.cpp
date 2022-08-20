class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>left;
        vector<int>right(nums.size());
        vector<int>ans(nums.size());
        int pro=1;
        for(int i=0;i<nums.size();i++)
        {
            left.push_back(pro*=nums[i]);
        }
        pro=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            pro*=nums[i];
            right[i]=pro;
        }
        
        ans[0]=right[1];
        for(int i=1;i<=nums.size()-2;i++)
        {
           ans[i]=left[i-1]*right[i+1];
         
        }
        ans[nums.size()-1]=left[nums.size()-2];
        
   
        return ans;
        
    }
};