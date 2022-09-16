class Solution {
public:
    
    int solve(int n, vector<int>&vec)
    {
        if(n<=1)
        {
            return vec[n]=n ;
        }
        if(n==2)
        {
            return vec[n]=1;
        }
        
        if(vec[n]!=-1)
        {
            return vec[n];
        }
        return vec[n]=solve(n-1,vec)+solve(n-2,vec);
    }
    
    int fib(int n) {
        vector<int>vec(n+1, -1);
        return solve(n, vec);
       
    }
};