class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum=accumulate(nums.begin(), nums.end(),0);
        
        int curr=0;
        for(int i=0;i<nums.size();i++)
        {
        
            int temp=curr;
            curr+=nums[i];
            if(sum-curr==temp)
            {
                return i;
            }
        }
        
        return -1;
        
        
    }
};