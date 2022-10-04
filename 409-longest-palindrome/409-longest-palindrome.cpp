class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>mp;
        
        for(auto it:s)
        {
            mp[it]++;
        }
        
        int res=0;
        bool is_odd=false;
        for(auto x:mp)
        {
            if(x.second%2==0)
            {
                res+=x.second;
            }
            else
            {
                is_odd=true;
                res+=x.second-1;
            }
        }
        
        if(is_odd==true)
        {
            res+=1;
        }
        return res;
    }
};