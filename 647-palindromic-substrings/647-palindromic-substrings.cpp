class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=i+diff;j<n;j++,i++)
            {
                if(diff==0)
                {
                    dp[i][j]=1;
                }
                else if(diff==1 && s[i]==s[j])
                {
                    dp[i][j]=1;
                }
                else if(diff>1 && s[i]==s[j] && dp[i+1][j-1]==1)
                {
                    dp[i][j]=1;
                }
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
                {
                    if(dp[i][j]==1)
                    {
                       count+=1;    
                    }
                }
        }
                
        return count;
    }
};