class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>res(nums.size());
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            int pos=(i+k)%size;
            res[pos]=nums[i];
        }
        
        for(int i=0;i<res.size();i++)
        {
            nums[i]=res[i];
        }
        
    }
};