class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
      
        int ans=1;
       
   
        for(int i=0;i<points.size()-1;i++)
        {
                   unordered_map<double, int>mp;
            
            for(int j=i+1;j<points.size();j++)
            {
                 if(points[j][0]==points[i][0])
                 {
                   mp[INT_MAX]++;
                 }
                else
                {  
                  double x=((double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]));
                  mp[x]++;
                 }
            }    
          
        int maxi=INT_MIN;
        for(auto &it:mp)
        {
            if(it.second>maxi)
            {
                maxi=it.second;
            }
        }
        
     ans=max(ans, maxi+1);   
                
           
        
     }
        
        
        return ans;
        
        
    }
};