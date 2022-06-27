// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  
  int countofsubsetsum(vector<int>A, int sum, vector<vector<int>>t)
  {
      for(int j=0;j<sum+1;j++)
      {
          t[0][j]=0;
      }
      t[0][0]=1;
      
      
      for(int i=1;i<=A.size();i++)
      {
          for(int j=0;j<=sum;j++)
          {
              if(A[i-1]<=j)
              {
                  t[i][j]=t[i-1][j]+t[i-1][j-A[i-1]];
              }
              else
              {
                  t[i][j]=t[i-1][j];
              }
          }
      }
      return t[A.size()][sum];
  }
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        
         int range=0;
         for(int i=0;i<A.size();i++)
         {
             range+=A[i];
         }
         if((range+target) %2!=0 || range+target<0)
         {
             return 0;
         }
         int sum=(range+target)/2;
          vector<vector<int>>t(A.size()+1, vector<int>(sum+1));
        return countofsubsetsum(A,sum,t);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends