class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left=0;
        int right=0;
        int count=INT_MIN;
        int ans=0;
        unordered_map<char,int>mp;
        while(right<s.size())
        {
            mp[s[right]]++;
            
            count=max(count, mp[s[right]]);
            
            if(((right-left)+1)-count<=k)
            {
                ans=max(ans,(right-left)+1);    // window_len=(right-left)+1
            }
            else
            {
                mp[s[left]]--;
                left++;
            }
            right++;
        }
        
        return ans;
    }
};