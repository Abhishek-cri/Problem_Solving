class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int col=matrix[0].size();
        int row=matrix.size();
        
        int pos=0;
        
            
        
        
        for(int i=0;i<row;i++)
        {
           if(matrix[i][col-1]>=target)
           {
             pos=i;
             break;
           }
        
        }
        
        for(int i=0;i<col;i++)
        {
            if(matrix[pos][i]==target)
            {
                return true;
            }
        }
        
        return false;
    }
};