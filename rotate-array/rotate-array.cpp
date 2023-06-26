class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k=k%nums.size();
        
       int l=0;
        int r=nums.size()-1;
        
        while(l<r)
        {
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l=l+1;
            r=r-1;  
        }
        
        l=0;
        r=k-1;
        
         while(l<r)
        {
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l=l+1;
            r=r-1;  
        }
        
        l=k;
        r=nums.size()-1;
        
          while(l<r)
        {
            int temp=nums[l];
            nums[l]=nums[r];
            nums[r]=temp;
            l=l+1;
            r=r-1;  
        }
        
        
        
        
    }
};