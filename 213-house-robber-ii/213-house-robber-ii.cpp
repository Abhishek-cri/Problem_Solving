class Solution {
public:
    
    
 int solve(vector<int>nums, int n,vector<int>&dp)
    {
     
        if(n<0)
        {
          return 0;
        }
     
     if(dp[n]!=-1)
     {
         return dp[n];
     }
        
        int pick=nums[n]+solve(nums,n-2,dp);
        int not_pick=0+solve(nums,n-1,dp);
        return dp[n]=max(pick,not_pick);
    }
    
    int rob(vector<int>& nums) { 
        vector<int>temp1;
        vector<int>temp2;
        int n=nums.size();
        
        if(n==1)
        {
            return nums[0];
        }
        for(int i=0;i<n;i++)
        {
            if(i!=0)
             temp1.push_back(nums[i]);
            if(i!=n-1)
             temp2.push_back(nums[i]);
                
        }
        
    
    
        vector<int>dp1(n,-1), dp2(n,-1);
       
        int ans1=solve(temp1,n-2,dp1);
        int ans2=solve(temp2,n-2,dp2);
        
        return max(ans1,ans2);
    }
};