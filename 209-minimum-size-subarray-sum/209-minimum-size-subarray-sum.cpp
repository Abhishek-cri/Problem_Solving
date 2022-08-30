class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
  
        
        int i=0;
        int j=0;
        int sum=nums[0];
        int mini=INT_MAX;
        
        while(j<nums.size())
        {
            
            
            if(sum<target)
            {
                 j++;
              
                if(j==nums.size()) break;
                  sum+=nums[j];
               
            }
            else 
            {
                mini=min(mini,j-i+1);
                sum-=nums[i];
                i++;
               
            }
          
        }
        
        if(mini==INT_MAX) return 0;
        
        return mini;
    }
};