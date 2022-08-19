class Solution {
public:
    
    
   static bool cmp(pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second>p2.second; 
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        
        vector<int>ans;
        unordered_map<int,int>mp;
        vector<pair<int,int>>res;
        for(auto x:nums)
        {
            mp[x]++;
        }
        
        
        for(auto x:mp)
        {
           res.push_back({x.first,x.second});  
        }
        
      sort(res.begin(),res.end(),cmp);
        
        for(auto x:res)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        
    for(int i=0;i<k;i++)
    {
        ans.push_back(res[i].first);
    }
        
        return ans;
    }
};