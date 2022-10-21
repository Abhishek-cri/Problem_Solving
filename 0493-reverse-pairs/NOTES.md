class Solution {
int res = 0;
​
int Merge(vector < int > & nums, int low, int mid, int high) {
int total = 0;
int j = mid + 1;
for (int i = low; i <= mid; i++) {
while (j <= high && nums[i] > 2ll  * nums[j]) {
j++;
}
total += (j - (mid + 1));
}
​
vector < int > t;
int left = low, right = mid + 1;
​
while (left <= mid && right <= high) {
​
if (nums[left] <= nums[right]) {
t.push_back(nums[left++]);
} else {
t.push_back(nums[right++]);
}
}
​
while (left <= mid) {