class Solution {
public:
    
    int solve(vector<int>& nums, int n , vector<int>&t)
    {
        int sum1=0;
        int sum2=0;
        if(n<=0)
        {
            return 0;
        }
        
        if(t[n]!=-1)
        {
            return t[n];
        }
        
        // include
        sum1+=nums[n-1]+solve(nums,n-2,t);
         sum2+=0+solve(nums,n-1,t);
        
        return t[n]=max(sum1,sum2);
        
    }
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>t(n+1,-1);
       return solve(nums,n,t);
        
    }
};