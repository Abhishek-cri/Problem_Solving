class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        
        unordered_map<int, int>mp;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }
        
        int count=0;
        for(auto &it:mp)
        {
            if(it.second==1)
            {
                return -1;
            }
            else if(it.second%3==0)
            {
                count+= it.second/3;
            }
            else if(it.second%3==1)
            {
                count+= (it.second/3)+1;
            }
            else if(it.second%3==2)
            {
                count+=(it.second/3)+1;
            }
        }
        
        return count;
        
    }
};