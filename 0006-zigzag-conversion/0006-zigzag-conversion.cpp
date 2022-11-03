class Solution {
public:
    string convert(string s, int numRows) {
        
        
        if(numRows==1)  return s;
        
        string res="";
        int n=s.size();
        for(int i=0;i<numRows;i++)
        {
            int increment=(numRows-1)*2;
            
            for(int j=i;j<n;j+=increment)
            {
                res+=s[j];
                
                if(i > 0 && i<numRows-1 && (j + increment - 2 * i)<n)
                {
                    res+=s[j+ increment -2 * i];
                }
            }
        }
        
        return res;
        
    }
};