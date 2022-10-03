class Solution {
public:
    
    
    bool isSafe(int col, int row, vector<string>&board,int n)
    {
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0)
        {
             if(board[row][col]=='Q')  return false;
             row--;
            col--;
        }
        
        row=duprow;
        col=dupcol;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        
        col=dupcol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
        
    }
    
    void solve(vector<vector<string>>&ans, vector<string>&board, int n, int col)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(col,row,board,n))
            {
                board[row][col]='Q';
                solve(ans, board, n, col+1);
                board[row][col]='.';
            }
        }
    }
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        int col=0;
        solve(ans,board,n,col);
        
        return ans;
         
    }
};