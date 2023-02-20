class Solution {
public:
    
    
    int mini_diff(int n, vector<long long int>vec)
    {
       long long  int ans=INT_MAX;
        for(int i=0;i<vec.size();i++)
        {
            ans=min(abs(vec[i]-n),ans);
            
        }
        
        return ans;
        
    }
    
    
    
    int minOperations(int n) {
        
        vector<long long int>vec;
        int count=0;
        int m=sqrt(n);
        // cout<<m;
        for(int i=0;i<=16;i++)
        {
            long long int a= pow(2,i);
            vec.push_back(a);
        }
        
        while(n!=0)
        {
            int a=mini_diff(n,vec);
            
           count+=1;
           n=a; 
            
          
        }
        
        return count;
        
        
    }
};