//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
  static bool compare(string a, string b)
	{
	    return b+a > a+b;
	}
	
	string printLargest(vector<string> &arr) {
	    // code here
	    int n=arr.size();
	    sort(arr.begin(), arr.end(), compare);
	    reverse(arr.begin(),arr.end());
	    string ans="";
	    for(int i=0;i<n;i++)
	    {
	        ans+=arr[i];
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends