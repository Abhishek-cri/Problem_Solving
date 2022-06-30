//  using number of insertions= string length- lcs length

class Solution {
public:
    
    int lcs(string s1, string s)
    {
        int m=s.length();
        
        vector<vector<int>>t(m+1, vector<int>(m+1));
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s[j-1])
                {
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                {
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
        }
        return t[m][m];
    }
    
    
    int minInsertions(string s) {
        
        string s1=s;
        reverse(s.begin(),s.end());
        
        int m=s.length();
        cout<<lcs(s1,s);
        return m-lcs(s1,s);
        
    }
};