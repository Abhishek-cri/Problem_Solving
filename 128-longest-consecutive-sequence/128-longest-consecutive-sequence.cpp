class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        unordered_set<int>s1(nums.begin(), nums.end());
    
       
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s1.find(nums[i]-1)==s1.end())
            {
                int current=nums[i];
                int length=1;
                    
                while(s1.find(current+1)!=s1.end())
                {
                    current+=1;
                    length+=1;
                }
                
                maxi=max(maxi, length);
            }
            
        }
        
        return maxi;
        
    }
};