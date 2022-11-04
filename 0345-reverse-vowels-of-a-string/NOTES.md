class Solution {
public:
string reverseVowels(string s) {
int i=0;
int j=s.size()-1;
while(i<j)
{
if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' && s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u')
{
swap(s[i],s[j]);
i++;
j--;
}
else  if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' && s[j]!='a'|| s[j]!='e'|| s[j]!='i'|| s[j]!='o'|| s[j]!='u')
{
j--;
}
else  if(s[i]!='a'|| s[i]!='e'|| s[i]!='i'|| s[i]!='o'|| s[i]!='u' && s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u')
{
i++;
}
}
return s;
}
};