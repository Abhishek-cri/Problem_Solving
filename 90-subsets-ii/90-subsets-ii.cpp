class Solution {
public:
    
    void solve(vector<int>nums,set<vector<int>>&st, vector<int>&temp,int index)
    {
        if(index>=nums.size())
        {
            st.insert(temp);
              return;
        }
        
        temp.push_back(nums[index]);
        solve(nums,st, temp, index+1);
        temp.pop_back();
        
        solve(nums,st,temp, index+1);
      
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int index=0;
        set<vector<int>>st;
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        solve(nums,st,temp,index);
        
        for(auto it:st)
        {
           ans.push_back(it);
        }
        return ans;
    }
};