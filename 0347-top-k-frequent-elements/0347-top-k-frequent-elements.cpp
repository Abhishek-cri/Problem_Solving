class Solution {
public:
    
    
    static bool cmp(pair<int, int>&a, pair<int, int>&b)
    {
        return a.second>b.second;
    }
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
         
        
        map<int, int>mp;
        vector<int>ans;
    
        if(nums.size()==0)
        {
            return ans;
        }
        
        for(auto &it:nums)
        {
            mp[it]++;
        }
        
        vector<pair<int, int>>vec;
        
        for(auto &it:mp)
        {
            vec.push_back({it.first,it.second});
        }
       
        sort(vec.begin(),vec.end(), cmp);
        int j=0;
        while(k--)
        {
           ans.push_back(vec[j].first);
            j++;
        }
        
        return ans;
    }
};