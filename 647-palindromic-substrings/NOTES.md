// exclude
solve(s,index+1,output,ans);
// include
char element=s[index];
output.push_back(element);
solve(s,index+1,output,ans);
}
int countSubstrings(string s) {
vector<string>ans;
int index=0;
string output="";
solve(s, index, output,ans);
int n=ans.size();
for(int i=0;i<ans.size();i++)
{
cout<<ans[i]<<" ";
}
return n;
}
};