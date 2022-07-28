class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int current=1;
        int ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            current=nums[i]*current;
            ans=max(ans,current);
            if(current==0)
            {
                current=1;
            }
         
        }
        current=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            current=current*nums[i];
            ans=max(ans,current);
            if(current==0)
            {
                current=1;
            }
        }
        
        return ans;
        
    }
};