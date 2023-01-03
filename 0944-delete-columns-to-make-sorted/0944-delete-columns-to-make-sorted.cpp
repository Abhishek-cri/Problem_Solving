class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int count=0;
        
        
        int col=strs[0].size();
        int row=strs.size();
        
        
        for(int i=0;i<col;i++)
        {
            for(int j=0;j<row-1;j++)
            {
                if(strs[j][i] > strs[j+1][i])
                {
                    count+=1;
                    break;
                }
            }
        }
        
        return count;
        
    }
};