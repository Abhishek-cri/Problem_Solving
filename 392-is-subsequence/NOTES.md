class Solution {
public:
int t[10001][10001];
int solve(string s, string t, int n, int m)
{
for(int i=0;i<m+1;i++)
{
for(int j=0;j<n+1;j++)
{
if(i==0 || j==0)
{
t[i][j]=0;
}
}
}
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;;j++)
{
if(s[i-1]==t[j-1])
{
t[i][j]=1+t[i-1][j-1];
}
else
{
t[i][j]=max(t[i-1][j],t[i][j-1]);
}