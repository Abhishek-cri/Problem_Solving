//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    
    int solve(int n, int m, int len, string A, string B, string C, vector<vector<int>>&dp)
    {
        if(len==0)  return 1;
        
        int a=0, b=0;
        
        if(dp[n][m]!=-1)
        {
            return dp[n][m];
        }
        
        if(A[n-1]==C[len-1])
        {
            a=solve(n-1,m,len-1,A,B,C,dp);
        }
        
        if(B[m-1]==C[len-1])
        {
            b=solve(n,m-1,len-1,A,B,C,dp);
        }
        
        return dp[n][m]=a || b; 
    }
    
    bool isInterleave(string A, string B, string C) 
    {
        //Your code here
        
        int n=A.size();
        int m=B.size();
        int len=C.size();
        
       vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
        
        if(n+m!=len)  return 0;
        
        return solve(n,m,len,A,B,C,dp);
    }

};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends