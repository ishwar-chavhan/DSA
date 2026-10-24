class Solution {
public:
    int solve(vector<int>& nums, long long int k){
        long long int r=0;
        long long int l=0;
        long long int sum=1;
        long long int ans=0;
        while(r<nums.size()){
            sum=sum*nums[r];
            while(l <= r && sum>=k){
             sum=sum/nums[l];
             l++;
            }
            ans=ans+(r-l+1);
            r++;
        }
        return ans;
    }
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=0)return 0;
        int ans=solve(nums , k);
        return ans<0 ? 0 :ans;
    }
};