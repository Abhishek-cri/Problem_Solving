class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int maxi=0;
       int i=0;
        int j=height.size()-1;
        int area=0;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                 area=height[i]*(j-i);
            }
            else
            {
                 area=height[j]*(j-i);
            }
            maxi=max(area,maxi);
            
            if(height[i]<height[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
            
        
       
        }
        
        return maxi;
        
        
        
        
    }
};