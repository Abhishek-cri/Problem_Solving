class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        
        
        for(int i=0;i<=num/2;i++)
        {
            int x=i;
            int y=num-i;
            string s=to_string(y);
            reverse(s.begin(), s.end());
            
            y=stoi(s);
            
            if(x==y) return true;
        }
        
        return false;
        
    }
};