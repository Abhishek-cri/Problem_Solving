class Solution {
public:
    
    int solve(int i,int j, int m, int n, vector<vector<int>> &vec){
        
       if(i==0 && j==0)
       {
           return vec[0][0]=1;
       }
        
    
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return 0;
        }
        
        if(vec[i][j]!=-1)
        {
            return vec[i][j];
        }
        
           return vec[i][j]=solve(i-1,j,m,n, vec) + solve(i,j-1,m,n, vec);
        
           
    }
    
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>vec(m,vector<int>(n,-1));
        
         solve(m-1,n-1, m,n, vec);
        
        return vec[m-1][n-1];
        
    }
};