class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<char>st1[9];
        unordered_set<char>st2[9];
        unordered_set<char>st3[9];
        
        
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                
                if(board[i][j]=='.')
                {
                    continue;
                }
                else
                {
                    int boxPos=(i/3)*3+(j/3);
                    if(st1[i].count(board[i][j]) || st2[j].count(board[i][j]) || st3[boxPos].count(board[i][j]))
                    {
                        return false;
                    }
                    
                    st1[i].insert(board[i][j]);
                    st2[j].insert(board[i][j]);
                    st3[boxPos].insert(board[i][j]);
                    
                }
               
            }
            
        }
        
        return true;
        
    }
};