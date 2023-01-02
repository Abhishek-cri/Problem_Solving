class Solution {
public:
    
    
    void addprimes(set<int>&st, int n)
    {
        int divisor=2;
        
        while(n>1)
        {
            if(n%divisor==0)
            {
                st.insert(divisor);
                n=n/divisor;
            }
            else
            {
                divisor++;
            }
        }
        
        
    }
    
    int distinctPrimeFactors(vector<int>& nums) {
        
        set<int>st;
        for(auto &it:nums)
        {
            addprimes(st,it);
        }
        
        return st.size();
    }
};