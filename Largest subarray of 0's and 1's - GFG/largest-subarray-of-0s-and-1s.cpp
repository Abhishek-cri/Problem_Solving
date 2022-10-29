//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int nums[], int N)
    {
        // Your code here
    
        unordered_map<int, int>mp;
        // m[0] = -1;
        
        // int curr_sum = 0 , max_len = 0;
        // for(int i = 0; i < N; i++){
        //     curr_sum += nums[i] == 0 ? -1 : 1;
            
        //     if(m.find(curr_sum) != m.end()){
        //         max_len = max(max_len , i - m[curr_sum]);
        //     }
            
        //     if(m.find(curr_sum) == m.end())
        //         m[curr_sum] = i;
        // }
        
        // return max_len;
        int sum=0;
        int maxi=0;
        
        for(int i=0;i<N;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        
        for(int i=0;i<N;i++)
        {
            sum+=nums[i];
            
            if(sum==0)
            {
                maxi=max(maxi,i+1);
            }
            else if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
       return maxi;
         
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends