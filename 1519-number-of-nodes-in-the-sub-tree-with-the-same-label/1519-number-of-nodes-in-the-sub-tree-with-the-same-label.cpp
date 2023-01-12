class Solution {
public:

    vector<int> dfs(int node,vector<vector<int>>&adj,string& label,vector<int>&vis,vector<int>&ans)
    {
        vector<int>res(26,0);
        vis[node]=1;
        res[label[node]-'a']++;
        for(auto &i:adj[node])
        {
            if(!vis[i])
            {
                vector<int>temp=dfs(i,adj,label,vis,ans);
                for(int i=0;i<26;i++)
                {
                    res[i]+=temp[i];
                }
            }
        }
        ans[node]=res[label[node]-'a'];
        return res;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>>adj(n);
        int x,y;
        for(auto&i:edges)
        {
            x=i[0];
            y=i[1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<int>count(26,0);
        vector<int>vis(n,0);
        vector<int>ans(n,0);
        dfs(0,adj,labels,vis,ans);
        return ans;
    }
};