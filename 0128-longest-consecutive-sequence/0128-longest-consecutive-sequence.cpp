class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        int n= nums.size();
        if(n<=1)
        {
            return n;
        }
        
        
        sort(nums.begin(), nums.end());
        
        set<int>temp;
        
        for(auto &it:nums)
        {
            temp.insert(it);
        }
        
        vector<int>ans;
        
        for(auto &it:temp)
        {
            ans.push_back(it);
        }
        
        int count=1;
        int maxi=1;
        for(int i=1;i<ans.size();i++)
        {
            
            if(ans[i]-ans[i-1]==1)
            {
                count+=1;
            }
            else
            {
                count=1;
            }
             maxi=max(count, maxi);
             
        }
        
        return maxi;
        
        
    }
};