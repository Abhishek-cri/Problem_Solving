class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int numb=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)  numb=nums[i];
            if(numb==nums[i]) count+=1;
            else count-=1;
        }
        
        return numb;
    }
};