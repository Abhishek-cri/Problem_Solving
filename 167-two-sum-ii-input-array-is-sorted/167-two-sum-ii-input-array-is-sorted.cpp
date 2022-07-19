class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int ,int>mp;
        vector<int>ans;
        
        for(int i=0;i<numbers.size();i++)
        {
            if(mp.count(target-numbers[i])==1)
            {
                ans.push_back(mp[target-numbers[i]]+1);
                ans.push_back(i+1);
                return ans;
            }
            mp[numbers[i]]=i;
        }
        
        
        return ans;
    }
};