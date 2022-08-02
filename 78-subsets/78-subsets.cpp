class Solution {
public:
    
    void solve( vector<int>nums, vector<int>output, int index,vector<vector<int>>&ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(output);
            return;
        }
        
         
         
       
        
        // exclude
        solve(nums,output,index+1,ans);
        
       int element=nums[index];
        
        output.push_back(nums[index]);
        
        solve(nums,output,index+1,ans);
       
        

        
   
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>output;
        int index;
        
        solve(nums,output,index,ans);
        
        return ans;
        
    }
};