class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        vector<int>temp;
        
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            int rem;
            int rev=0;
            int k;
           while(nums[i]!=0)
           {
               rem=nums[i]%10;
               rev=rev*10+rem;
               nums[i]=nums[i]/10;
           }
            
            temp.push_back(rev);
            
        }
        
        nums.clear();
        
      for(int i=0;i<temp.size();i++)
      {
          nums.push_back(temp[i]);
      }
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     cout<<nums[i]<<" ";
        // }
     
       sort(nums.begin(), nums.end());
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                count+=1;
            }
        }
     return count;
    }
};