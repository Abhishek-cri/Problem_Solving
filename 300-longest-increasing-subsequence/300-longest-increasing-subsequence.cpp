class Solution {
public:
    
    int solve(vector<int>&nums, int index, int prev_index,vector<vector<int>>&dp)
    {
        if(index==nums.size())
        {
            return 0;
        }
        
        if(dp[index][prev_index+1]!=-1)
        {
            return dp[index][prev_index+1];
        }
        
        // not take
        
        int len=0+solve(nums,index+1,prev_index,dp);
        
        // take
        if(prev_index==-1 || nums[index]>nums[prev_index])
        {
            len=max(len,1+solve(nums, index+1, index,dp));
        }
        
        return dp[index][prev_index+1]=len;
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        int index=0;
        int prev_index=-1;
        vector<vector<int>>dp(n+1, vector<int>(n+1,-1));
      return  solve(nums, index, prev_index,dp);
        
        
    }
};