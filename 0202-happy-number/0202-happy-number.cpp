class Solution {
public:
    bool isHappy(int n) {
        
        set<int>st;
         
        while(1)
        {
             int sum=0;
          
            while(n)
            {
                int rem=n%10;
                sum+=rem*rem;
                n=n/10;
            }
            if(st.find(sum)!=st.end())
            {
                return false;
            }
            if(sum==1)
            {
                return true;
            }
            else
            {
                n=sum;
                st.insert(sum);
            }
        }
        
        return true;
        
    }
};