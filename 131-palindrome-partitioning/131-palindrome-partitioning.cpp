class Solution {
public:
    
    
    bool isPalind(string s, int start, int end)
    {
        int i=start;
        int j=end;
        
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
           i++;
           j--;
        }
        
        return true;
    }
    
    void solve(string s, vector<vector<string>>&ans,   vector<string>&temp, int index)
    {
        if(index>=s.size())
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(isPalind(s,index,i))
            {
                temp.push_back(s.substr(index,i-index+1));
                solve(s,ans,temp,i+1);
                temp.pop_back();
            }
        }
    }
    
    
    
    vector<vector<string>> partition(string s) {
        
        int index=0;
        vector<vector<string>>ans;
        vector<string>temp;
        solve(s, ans, temp, index);
        return ans;
        
    }
};