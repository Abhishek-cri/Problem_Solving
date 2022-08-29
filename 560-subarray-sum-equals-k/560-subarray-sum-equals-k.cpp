class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int sum=0;
        int count=0;
        unordered_map<int,int>mp;
        
        for(auto x:nums)
        {
            sum+=x;
            if(mp.find(sum-k)!=mp.end())
            {
                count+=mp[sum-k];
            }
            if(sum==k)
            {
               count+=1; 
            }
            mp[sum]++;
        }
        
        return count;
        
    }
};