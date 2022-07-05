class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int count[26]={0};
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(count[s[i]-'a']==1)
            {
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};