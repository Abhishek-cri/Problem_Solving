class Solution {
public:
    
    int solve(int m, int n, int sr, int en,vector<vector<int>>&dp)
    {
        if(sr<0 || en<0 || sr>=m || en>=n)
        {
            return 0;
        }
        if(sr==m-1 || en==n-1)
        {
            return dp[sr][en]=1;
        }
    
        if(dp[sr][en]!=-1)
        {
            return dp[sr][en];
        }
       return dp[sr][en]=solve(m,n,sr+1,en,dp)+solve(m,n,sr,en+1,dp);
        
    }
    
    int uniquePaths(int m, int n) {
        
        int sr=0;
        int en=0;
        int paths=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,sr,en,dp);
        
    }
};