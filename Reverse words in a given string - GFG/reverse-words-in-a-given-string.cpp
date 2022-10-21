//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        reverse(S.begin(), S.end());
        
        int i=0;
        int j=0;
        
        while(i<S.size())
        {
            if(S[i]=='.')
            {
                reverse(S.begin()+j, S.begin()+(i));
               
                i++;
                j=i;
            }
            else
            {
                i++;
            }
        }
        reverse(S.begin()+j,S.begin()+i);
        return  S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends