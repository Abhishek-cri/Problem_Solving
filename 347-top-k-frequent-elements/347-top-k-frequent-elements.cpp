class Solution {
public:
    
  static  bool comp(pair<int,int>p1, pair<int,int>p2)
    {
        return p1.second>p2.second;
    }
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int>ans;
        vector<pair<int,int>>vec;
        map<int,int>mp;
        
        for(auto i:nums)
        {
            mp[i]++;
        }
        
        for(auto i:mp)
        {
            vec.push_back({i.first,i.second});
        }
        
        sort(vec.begin(),vec.end(),comp);
        
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(vec[i].first);
        }
       return ans; 
        
    }
};