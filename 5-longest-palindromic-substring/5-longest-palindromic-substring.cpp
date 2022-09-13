class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.size();
        vector<vector<int>>vec(n+1,vector<int>(n+1,0));
        int maxi=0;
        string ans="";
        for(int diff=0;diff<n;diff++)
        {
            for(int i=0,j=i+diff;j<n;i++,j++)
            {
               
               if(diff==0)
               {
                   vec[i][j]=1;
               }
               else if(diff==1 && s[i]==s[j])
               {
                   vec[i][j]=2;
               }
               else if(diff>1 && s[i]==s[j] && vec[i+1][j-1])
               {
                   vec[i][j]=vec[i+1][j-1]+2;
               }
                
               if(vec[i][j]!=0)
               {
                   if(j-i+1>maxi)
                   {
                       maxi=j-i+1;
                   }
                   ans=s.substr(i,maxi);
                   
               }
            }
        }
        
     return ans;
        
    }
};