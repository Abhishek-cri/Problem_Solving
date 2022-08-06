class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        vector<int>ans;
        int num1=-1;
        int num2=-1;
        
        for(auto el : nums)
        {
            if(el==num1)
            {
                count1+=1;
            }
            else if(el==num2)
            {
                count2+=1;
            }
            else if(count1==0)
            {
                num1=el;
                count1+=1;
            }
            else if(count2==0)
            {
                num2=el;
                count2+=1;
            }
            else
            {
                count1-=1;
                count2-=1;
            }
        }
        
        
        
         count1=0;
         count2=0;
        
        for(auto i:nums)
        {
            if(num1==i)
            {
                count1+=1;
            }
            else if(num2==i)
            {
                count2+=1;
            }
        }
        
        if(count1>(nums.size()/3))
        {
            ans.push_back(num1);
        }
        if(count2>(nums.size()/3))
        {
            ans.push_back(num2);
        }
        
        return ans;
        
    }
};