class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char>st;
        int start=0;
        int end=0;
        int ans=0;
        while(start<s.size())
        {
            if(st.find(s[start])==st.end())
            {
                ans=max(ans,start-end+1);
                st.insert(s[start]);
                start++;
            }
            else
            {
                st.erase(s[end]);
                end++;
            }
             
        }      
        
     
        return  ans;
    }
};