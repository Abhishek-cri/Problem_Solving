class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
    vector<int>ans;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
       
        
    for(int i=0;i<queries.size();i++)
    {
        int curr=queries[i];
        int currentans=n;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]>curr)
            {
                currentans=j;
                break;
            }
            
        }
        ans.push_back(currentans);
    }
        
    
        
        
        
        
        
//         for(int i=0;i<nums.size();i++)
//         {
//             cout<<nums[i]<<" ";
//         }
        return ans;
        
    }
};