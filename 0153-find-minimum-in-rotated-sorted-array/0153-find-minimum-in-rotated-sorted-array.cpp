class Solution {
public:
   int solve(vector<int>&nums){
    int start=0;
    int end=nums.size()-1;
    int ans=nums[0];
    int mid=start+(end-start)/2;
    while(start<=end){
        if(nums[0]>nums[mid]){
            ans=min(ans,nums[mid]);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
   }
    int findMin(vector<int>& nums) {
        return solve(nums);
    }
};