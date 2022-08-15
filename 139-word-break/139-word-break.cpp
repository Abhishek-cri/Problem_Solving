class Solution {
public:
    
    bool solve(string s, int index, set<string>&wordDict,vector<int>&dp)
    {
        if(index==s.size())
        {
            return 1;
        }
        
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        string temp="";
        for(int i=index;i<s.size();i++)
        {
            temp+=s[i];
            if(wordDict.find(temp)!=wordDict.end())
            {
                if(solve(s, i+1, wordDict,dp)==true)
                {
                    return dp[index]=1;
                }
             
            }
        }
        return dp[index]=0;
    }
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        set<string>st;
        vector<int>dp(s.length()+1,-1);
        for(auto a:wordDict)
        {
            st.insert(a);
        }
        
        return solve(s,0,st,dp);
        
    }
};