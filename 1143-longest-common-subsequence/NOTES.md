class Solution {
public:
int longest(string text1, string text2, int n, int m, vector<vector<int>>t )
{
if(n==0 || m==0)
{
return 0;
}
if(t[n][m]!=-1)
{
return t[n][m];
}
if(text1[n-1]==text2[m-1])
{
return t[n][m]=1+longest(text1, text2, n-1, m-1, t);
}
else
{
return t[n][m]=max(longest(text1,text2, n-1,m, t), longest(text1,text2, n,m-1, t));
}
return t[n][m];
}
int longestCommonSubsequence(string text1, string text2) {
int n=text1.length();
int m=text2.length();
vector<vector<int>>t(n+1, vector<int>(m+1, -1));
return longest(text1,text2,n,m,t);
}
};