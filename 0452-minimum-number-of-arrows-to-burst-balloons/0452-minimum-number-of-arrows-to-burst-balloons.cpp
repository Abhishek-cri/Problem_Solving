class Solution {
public:
    
    static bool comp(vector<int>&a, vector<int>&b)
    {
        return a[1]<b[1];
    }
    
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        if(points.size()==0)
        {
            return 0;
        }
        
        int ans=1;
        
        sort(points.begin(), points.end(),comp);
        
        for(int i=0;i<points.size();i++)
        {
            cout<<points[i][0]<<" "<<points[i][1]<<endl;
        }
        
        
        int ref=points[0][1];
        
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]>ref)
            {
                ans+=1;
                
                ref=points[i][1];
            }
            
        }
        
        return ans;
        
    }
};