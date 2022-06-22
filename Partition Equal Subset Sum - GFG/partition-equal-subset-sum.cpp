// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        
    
        int sum=0;
        for(int i=0;i<N;i++)
         {
             sum+=arr[i];
         }
         int k=sum/2;
         vector<vector<int>>t(N+1,vector<int>(sum+1));
         if(sum%2!=0)
         {
             return 0;
         }
         else
         {
             return subset(N,arr,k,t);
         }
        
    }
    
    int subset(int N, int arr[], int sum, vector<vector<int>>&t)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<sum;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=1;
                }
                
            }
        }
        
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=(t[i-1][j-arr[i-1]] || t[i-1][j]);
                }
                else
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[N][sum];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends