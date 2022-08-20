class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<vector<int>>temp=matrix;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                 if(matrix[i][j]==0)
                 {
                     for(int i=0;i<matrix.size();i++)
                     {
                         temp[i][j]=0;
                     }
                     for(int j=0;j<matrix[0].size();j++)
                     {
                         temp[i][j]=0;
                     }
                 }
            }
        }
        
        matrix=temp;
        
    }
};