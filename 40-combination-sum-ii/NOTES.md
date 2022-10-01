solve(candidates, target, index+1, st, temp);
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
int index=0;
vector<vector<int>>ans;
set<vector<int>>st;
vector<int>temp;
sort(candidates.begin(), candidates.end());
solve(candidates, target, index, st, temp);
// for(auto it:ans)
// {
//     st.insert(it);
// }
ans.clear();
for(auto x:st)
{
ans.push_back(x);
}
return ans;
}
};