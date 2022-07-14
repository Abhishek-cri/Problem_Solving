class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int i=0;
        int j=n-1;
        int mid=(i+j)/2;
        
        while(i<=j)
        {
            mid=(i+j)/2;
            
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return -1;
    }
};