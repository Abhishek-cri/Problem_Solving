class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;
        int n=s.size();
        int i=0;
        int j=0;
        int maxi=0;
        
        while(j<n)
        {
            mp[s[j]]++;
            
            
            if(mp[s[j]]==1)
            {
                 maxi=max(maxi,j-i+1);
            }
             if(mp[s[j]]>=2)
            {
                 
                while(mp[s[j]]>=2)
                {
                    mp[s[i]]--;
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};