class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int>vec;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
            {
              i++;  
                
                if(i>=n)
                {
                    break;
                }
            }
            
            if(nums2[j]<nums1[i])
            {
                j++;
                if(j>=m)
                {
                    break;
                }
            }
            if(nums1[i]==nums2[j])
            {
                vec.push_back(nums1[i]);
                i++;
                j++;
                if(i>=n || j>=m)
                {
                    break;
                }
            }
        }
        
        return vec;
    }
};