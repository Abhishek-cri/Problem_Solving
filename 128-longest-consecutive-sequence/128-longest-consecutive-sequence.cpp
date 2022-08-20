class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>st;
        
    
        
        for(auto i:nums)
        {
            st.insert(i);
        }
        
    
        int maxi=0;
      
        for(int i=0;i<nums.size();i++)
        { 
          if(st.find(nums[i]-1)==st.end())
          {
               int current_num=nums[i];
               int length=1;
              while(st.find(current_num+1)!=st.end())
              {
                  current_num+=1;
                  length+=1;
              }
              maxi=max(maxi,length);
          }
           
        }
        
        return maxi;
    }
};