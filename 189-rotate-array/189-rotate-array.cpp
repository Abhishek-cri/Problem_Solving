class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
       vector<int>temp(n);
        
        for(int i=0;i<nums.size();i++)
        {
            int pos=(i+k)%n;
            temp[pos]=nums[i];
        }
       
        for(int i=0;i<temp.size();i++)
        {
              nums[i]=temp[i];           
        }
        
    }
};