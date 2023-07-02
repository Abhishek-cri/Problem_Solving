class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>temp(n, vector<int>(m));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                temp[i][j]=matrix[j][i];
            }
        }
        
        
        
        
        for(int i=0;i<temp.size();i++)
        {
            reverse(temp[i].begin(),temp[i].end());
        }
        
         for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j]=temp[i][j];
            }
            
        }
        
        
        
    }
};