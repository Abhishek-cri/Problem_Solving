class Solution {
public:
    int maxScore(vector<int>& nums) {
        
        int cnt=0;
        
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        
        long long int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(sum>0)
            {
                cnt+=1;
            }
        }
        
        return cnt;
        
    }
};