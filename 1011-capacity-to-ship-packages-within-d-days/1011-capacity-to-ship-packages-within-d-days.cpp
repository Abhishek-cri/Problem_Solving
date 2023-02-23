class Solution {
public:
    
    int count_days(vector<int>weights, int mid)
    {
        int count=1;
        int sum=0;
        
        for(int i=0;i<weights.size();i++)
        {
            if(sum+weights[i]>mid)
            {
                ++count;
                sum=weights[i];
            }
            else
            {
                sum+=weights[i];
                
            }
        }
        
        return count;
        
    }
    
    
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        
            int low=0;
            int sum=0;
            for(int i=0;i<weights.size();i++)
            {
             sum+=weights[i];
                low=max(low,weights[i]);
            }
        
        int high=sum;
        
 
          
       
        while(low<high)
        {
            
           int mid=low+(high-low)/2;
            
            int sum=0;
            int count=1;    
            for(int i=0;i<weights.size();i++)
            {
                if(sum+weights[i] > mid)
                {
                    count+=1;
                    sum=0;
                }
            
                    sum+=weights[i];
                
            }
            
            if(count <=days)
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return high;    
        
    }
};