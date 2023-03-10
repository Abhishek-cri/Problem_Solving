class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string ans="";
        
        for(char &c:num)
        {
            while(k && ans.back()>c && ans.size())
            {
                ans.pop_back();
                k-=1;
            }
            
            if(c!='0' || ans.size())
            {
                ans.push_back(c);
            }
        }
        
        while(ans.size() && k--)
        {
            ans.pop_back();
        }
        
        return (ans=="")?"0":ans;
            
        
    }
};