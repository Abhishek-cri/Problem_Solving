class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int maxi=0;
          int sum=0;
        for(int i=1;i+1<n;i++)
        {
          // sum=0;
            for(int j=1;j+1<m;j++)
            {
                sum=0;
        sum+=grid[i-1][j-1]+grid[i-1][j]+grid[i-1][j+1]+grid[i][j]+grid[i+1][j-1]+grid[i+1][j]+grid[i+1][j+1];
                   maxi=max(sum,maxi);
            }
         
        }
        
        return maxi;
        
    }
};