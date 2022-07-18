class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int>temp;
        int count=0;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
            else
            {
                count+=1;
            }
        }
        
        while(count!=0)
        {
            temp.push_back(0);
            count--;
        }
        
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        
    }
};