// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int t[501][501];
    
    bool ispaling(string &str, int i, int j)
    {
        if(i==j)
          {
              return 1;
          }
          if(i>j)
            {
                return 0;
            }
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return 0;
               
            }
             i++;
             j--;
        }
        
        return 1;
    }
    
    
    int solve(string &str, int i, int j)
    {
        if(i>=j)
        {
            return 0;
        }
            // int ans=0;
        if(ispaling(str, i, j)==true)
        {
            return 0;
        }
       if(t[i][j]!=-1)
       {
           return t[i][j];
       }
       
      int ans=INT_MAX;
      
      for(int k=i;k<j;k++)
      {
         ans=min(ans, 1+solve(str, i,k)+solve(str, k+1, j));
      }
      
      return t[i][j]=ans;
      
    }

    
    
    
    int palindromicPartition(string str)
    {
     
     int i=0;
     int j=str.length();
     // code here
     memset(t,-1,sizeof(t));
     return solve(str, i, j-1);
     
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends