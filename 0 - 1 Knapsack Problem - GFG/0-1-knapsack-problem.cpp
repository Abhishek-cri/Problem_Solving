// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int knapSack1(vector<vector<int>>&t,int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
       if(n==0 || W==0)
       {
           return 0;
       }
       
       if(t[n][W]!=-1)
       {
           return t[n][W];
       }
       
       if(wt[n-1]<=W)
       {
           return t[n][W]=max(val[n-1]+knapSack1(t, W-wt[n-1], wt, val, n-1 ), knapSack1(t, W,wt,val,n-1));
           
       }
       else 
       {
           return t[n][W]=knapSack1(t,W, wt, val,n-1);
       }
       
    }
    
    int knapSack(int W, int wt[], int val[], int n)
    {
        // int t[n+1][W+1]={{-1}};
        vector<vector<int>>t(n+1, vector<int>(W+1, -1));
        return knapSack1(t, W, wt, val, n);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends