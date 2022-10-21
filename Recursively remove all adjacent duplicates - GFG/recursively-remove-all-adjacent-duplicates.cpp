//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        
        string temp;
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(i>0 && s[i-1]==s[i] || i+1<n && s[i+1]==s[i])
            {
                continue;
            }
            else
            {
                temp+=s[i];
            }
        }
        if(temp.length()==s.length())  return temp;
        else
        {
            return rremove(temp);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends