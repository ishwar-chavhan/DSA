class Solution {
public:
    int solve(vector<int>&nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int ans=0;
        while(start<=end){
            if(mid!=0){
                if(mid&1){
                if((nums[mid]!=nums[mid-1]) && nums[mid] != nums[mid+1]){
                   ans= nums[mid];
                   break;
                }
                else if(nums[mid]!=nums[mid+1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else{
                 if((nums[mid]!=nums[mid-1]) && nums[mid] != nums[mid+1] ){
                   ans= nums[mid];
                   break;
                }
                else if(nums[mid]!=nums[mid+1]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            }
            else{
                ans=nums[0];
                break;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()<=1) return nums[0];
        return solve(nums);
        // return 0;
    }
};