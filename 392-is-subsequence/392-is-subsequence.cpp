class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int m=s.size();
        int n=t.size();
        /*vector<vector<int>>ans(m+1, vector<int>(n+1));
        
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                {
                    ans[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    ans[i][j]=1+ans[i-1][j-1];
                }
                else
                {
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        
        int p=ans[m][n];
        
        if(p==m)
        {
            return true;
        }
        else
        {
            return false;
        }*/
        
    // new solution
        
        int i=0;
        
        if(n==0 && m==0)
        {
            return true;
        }
        
        for(int j=0;j<n;j++)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            if(i==m)
            {
                return true;
            }
           
        }
         return false;
    }
};