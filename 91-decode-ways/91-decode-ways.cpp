class Solution {
public:
    
    int solve(string s, int n, vector<int>& dp)
    {
        int count=0;
        if(n==0)
        {
            return dp[n]=1;
        }
        
        if(n==1)
        {
            if(s[0]!='0')
            {
                return dp[n]=1;
            }
            else if(s[0]=='0')
            {
                return dp[n]=0;
            }
        }
        
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        
        if(s[n-1]>'0')
        {
            count+=solve(s,n-1,dp);
        }
        
        if(s[n-2]=='1' || s[n-2]=='2' && s[n-1]<'7')
        {
            count+=solve(s,n-2,dp);
        }
        
        return dp[n]=count;
    }
    
    
    int numDecodings(string s) {
        
        int n=s.size();
        vector<int>dp(n+1,-1);
        
        int ans=solve(s,n,dp);
        
        return ans;
    }
};