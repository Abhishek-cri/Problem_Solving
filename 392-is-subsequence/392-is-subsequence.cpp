class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        int i=0;
        if(n==0 && m==0)
        {
            return true;
        }
        
        for(int j=0;j<m;j++)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            if(i==n)
            {
                return true;
            }
        }
        
        return false;
    } 
};