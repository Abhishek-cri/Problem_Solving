class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>res;
        
        for(int i=0;i<nums1.size();i++)
        {
            int left=0;
            int right=nums2.size()-1;
            int mid=(left+right)/2;
            while(left<=right)
            {
                mid=(left+right)/2;
                
                if(nums1[i]==nums2[mid])
                {
                    res.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+mid);
                    break;
                }
                else if(nums1[i]>nums2[mid])
                {
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            
        }
        
        return res;
        
    }
};