// class Solution {
// public:
    
    
//     int merge(vector<int>&nums, int l, int mid, int high)
//     {
//         int count=0;
//         vector<int>temp;
//         int j=mid+1;
//         for(int i=l;i<=mid;i++)
//         {
//             while(j<=high && nums[i]>2ll*nums[j])
//             {
//                 j++;
//             }
//             count+=j-(mid+1);
//         }
        
//         int left=l;
//         int right=mid+1;
//         int k=l;
        
//         while(left<=mid && right<=high)
//         {
//             if(nums[left]<=nums[j])
//             {
//                 temp.push_back(nums[left++]);
//             }
//             else
//             {
//                 temp.push_back(nums[right++]);
//             }
//         }
        
//         while(left<=mid)
//         {
//             temp.push_back(nums[left++]);
//         }
//         while(right<=high)
//         {
//             temp.push_back(nums[right++]);
//         }
        
//         for(int i=l;i<=high;i++)
//         {
//             nums[i]=temp[i-l];
//         }
        
//         return count;
//     }
    
//     int mergesort(vector<int>&nums, int l , int high)
//     {
       
//         if(l>=high) return 0;
        
//         int mid=(l+high)/2;
// int count=mergesort(nums, l, mid);
// count+=mergesort(nums, mid+1, high);
// count+=merge(nums, l, mid, high);
        
//         return count;
//     }
    
    
    
//     int reversePairs(vector<int>& nums) {
        
//        return mergesort(nums, 0 , nums.size()-1);
       
//     }
// };

class Solution {
    int res = 0;

   int Merge(vector < int > & nums, int low, int mid, int high) {
  int total = 0;
  int j = mid + 1;
  for (int i = low; i <= mid; i++) {
    while (j <= high && nums[i] > 2ll  * nums[j]) {
      j++;
    }
    total += (j - (mid + 1));
  }

  vector < int > t;
  int left = low, right = mid + 1;

  while (left <= mid && right <= high) {

    if (nums[left] <= nums[right]) {
      t.push_back(nums[left++]);
    } else {
      t.push_back(nums[right++]);
    }
  }

  while (left <= mid) {
    t.push_back(nums[left++]);
  }
  while (right <= high) {
    t.push_back(nums[right++]);
  }

  for (int i = low; i <= high; i++) {
    nums[i] = t[i - low];
  }
  return total;
}
int MergeSort(vector < int > & nums, int low, int high) {

  if (low >= high) return 0;
  int mid = (low + high) / 2;
  int inv = MergeSort(nums, low, mid);
  inv += MergeSort(nums, mid + 1, high);
  inv += Merge(nums, low, mid, high);
  return inv;
}

public:
    int reversePairs(vector<int> &nums) {
        return MergeSort(nums, 0, nums.size() - 1);
        
    }
};