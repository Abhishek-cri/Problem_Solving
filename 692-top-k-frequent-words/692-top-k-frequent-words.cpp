class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        vector<string>ans;
        if(words.empty())
        {
            return ans;
        }
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        
    set<pair<int,string>>st;
        
        for(auto x:mp)
        {
            st.insert({-x.second,x.first});
        }
        
    for(auto x:st)
    {
        ans.push_back(x.second);
        if(ans.size()==k)
        {
            break;
        }
    }
    
      
        // sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};