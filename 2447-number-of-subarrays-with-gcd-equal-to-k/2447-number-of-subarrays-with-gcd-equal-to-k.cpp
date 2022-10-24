class Solution {
public:
//     int gcd(int a, int b)
//     {
//         if(a==0)
//         {
//             return b;
//         }
//         if(b==0)
//         {
//             return a;
//         }
        
//         if(a>b)
//         {
//             return gcd(a-b,b);
//         }
//         else
//         {
//             return gcd(a,b-a);
//         }
//     }
     int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    
    int subarrayGCD(vector<int>& nums, int k) {
        
        int count=0;
        
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            a=0;
            
            for(int j=i;j<nums.size();j++)
            {
                a=gcd(a,nums[j]);
                
                if(a==k)
                {
                    count+=1;
                }
            }
        }
        
        return count;
    }
};