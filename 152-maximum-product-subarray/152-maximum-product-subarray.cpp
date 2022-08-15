class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int current_p=1;
        int maxi_p=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            current_p*=nums[i];
            maxi_p=max(current_p,maxi_p);
            if(current_p==0)
            {
                current_p=1;
            }
        }
        
       current_p=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            current_p*=nums[i];
            maxi_p=max(current_p,maxi_p);
            if(current_p==0)
            {
                current_p=1;
            }
        }
        
        return maxi_p;
    }
};