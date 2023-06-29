class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                count+=1;
                i-=1;
            }
                
        }
        
        cout<<count;
        
        while(count)
        {
            nums.push_back(0);
            count-=1;
        }
        
        
    }
};