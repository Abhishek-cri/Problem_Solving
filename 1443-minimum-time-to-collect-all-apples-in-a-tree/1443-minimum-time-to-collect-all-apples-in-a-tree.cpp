class Solution {
public:
    
    int solve( vector<int>vec[],vector<bool>& hasApple, int node, int parent)
    {
        int distance=0;
        for(auto &i:vec[node])
        {
            if(i!=parent)
            {
                int temp=solve(vec, hasApple, i, node);
                
                if(hasApple[i])
                {
                    distance+=(2+temp);
                    hasApple[node]=true;
                }
            }
                
        }
        return distance;
    }
    
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        // int k=edges.size();
        
        vector<int>vec[n];
        
        for(int i=0;i<edges.size();i++)
        {
            int a=edges[i][0];
            int b=edges[i][1];
            
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        
        return solve(vec, hasApple, 0, 0);
        
        
    }
};