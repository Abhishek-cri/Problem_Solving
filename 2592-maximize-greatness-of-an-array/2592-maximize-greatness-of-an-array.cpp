class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int i=0;
        int j=1;
        int count=0;
        while(j<nums.size())
        {
            if(nums[i]<nums[j])
            {
                count+=1;
                i+=1;
                j+=1;
            }
            else
            {
                j+=1;
            }
        }
        
        return count;
    }
};