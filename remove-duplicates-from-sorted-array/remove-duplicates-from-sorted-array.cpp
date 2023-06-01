class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        
        while(k<nums.size())
        {
            if(nums[k]==nums[k-1])
            {
                nums.erase(nums.begin()+(k-1));
            }
            else
            {
                k++;
            }
        }
        
        return nums.size();
        
    }
};