class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums2.size();i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        
        if(nums1.size()==0)
        {
            return 0;
        }
        
        if(nums1.size()==1)
        {
         return nums1[0];   
        }
        // for(int i=0;i<nums1.size();i++)
        // {
        //     cout<<nums1[i]<<" ";
        // }
        
        double low=0;
        double high=nums1.size()-1;
        int mid;
        double median;
        
        // double mean;
        // cout<<high;
        mid=(low+high)/2;
        cout<<mid;
        // cout<<nums1.size();
        // cout<<nums1[mid]<< " "<< nums1[mid+1];
        if(nums1.size() %2 ==0)
        {
            
            median=(nums1[mid]+nums1[mid+1])/double(2);
        }
        else
        {
            median=nums1[mid];
        }
        
        return median;
    }
};