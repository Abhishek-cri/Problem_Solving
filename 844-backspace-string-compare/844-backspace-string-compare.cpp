class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        
        stack<char>st;
        stack<char>st2;
        if(s==t)
        {
            return true;
        }
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !st.empty())
            {
                st.pop();
            }
            else if(s[i]!='#')
            {
                st.push(s[i]);
            }
        }
        
       for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && !st2.empty())
            {
                st2.pop();
            }
            else if(t[i]!='#')
            {
                st2.push(t[i]);
            }
        }
        
        if(st.size()!=st2.size())
        {
            return false;
        }
        
        while(!st.empty() && !st2.empty())
        {
            if(st.top()!=st2.top())
            {
                return false;
            }
            st.pop();
            st2.pop();
        }
        
        return true;
        
        
    }
};