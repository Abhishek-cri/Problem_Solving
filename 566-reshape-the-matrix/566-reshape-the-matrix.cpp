class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rows=mat.size();
        int col=mat[0].size();
        
    // int arr[rows*col];
        vector<int>vec;
        
        int k=0;
        if(rows*col !=r*c)
        {
            return mat;
        }
       \
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            vec.push_back(mat[i][j]);
        }
    }
        
     vector<vector<int>>ans(r,vector<int>(c));
        int l=0;
        for(int i=0;i<r;i++)
        {
          for(int j=0;j<c;j++)
          {
              ans[i][j]=vec[l++];
          }
        }
        
 return ans;
        
    }
};