class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
// 1.Dodaj liczby z obu tablic do nums.
nums.insert(nums.end(), nums1.begin(),nums1.end());

nums.insert(nums.end(), nums2.begin(),nums2.end());
// 2.Posortuj nums.
sort(nums.begin(), nums.end());
// 3.Znajdź medianę.
int N = nums.size();
if (N%2==1){
    return nums[N/2];
}else {
    return (nums[N/2-1]+ nums[N /2]) /2.0;
}
        
    }
};