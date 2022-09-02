class Solution {
public:
    
    int solve(vector<int>& vec, int n)
    {
        if(n<3)
        {
            if(n==2)
              return 1;
            else if(n<2)
                return n;
        }
       
        
        if(vec[n]!=-1)
        {
            return vec[n];
        }
        
        return vec[n]=solve(vec,n-1)+solve(vec,n-2)+solve(vec,n-3);
    }
    
    
    int tribonacci(int n) {
        vector<int>vec(n+1,-1);
        return solve(vec,n);
    }
};