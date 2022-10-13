class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int i=0;
        int j=0;
        int count=INT_MIN;
        unordered_map<char, int>mp;
        int ans=0;
        
        while(j<s.size())
        {
            mp[s[j]]++;
            count=max(count,mp[s[j]]);
            
            if((j-i+1)-count<=k)
            {
               ans=max(ans,j-i+1); 
            }
            else
            {
                mp[s[i]]--;
                i++;
            }
        j++;  
    }
        
        return ans;
    }  
        
};