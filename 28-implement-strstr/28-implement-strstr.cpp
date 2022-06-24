class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n=haystack.size();
        int m=needle.size();
        int i=0;
       int j=0;
        for( i=0;i<n;i++)
        {
             
            for( j=0;j<m;j++)
            {
                if(needle[j]==haystack[j+i])
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            
            if(j==m)
            {
                return i;
            }
        }
       return -1; 
    }
};