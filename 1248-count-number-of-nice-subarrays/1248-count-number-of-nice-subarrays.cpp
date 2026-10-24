#include<unordered_map>
class Solution {
public:
    int solve(vector<int>& nums, int k){
        int r=0,l=0;
        int ans=0;
        int one=0;
        int zero=0;
        while(r<nums.size()){
            if(nums[r]&1){
                one++;
            }

            while(one>k){
                if(nums[l]&1){
                    one--;
                }
                l++;
            }
            ans=ans+(r-l+1);
            r++;
        }
        return ans;
}

    int numberOfSubarrays(vector<int>& nums, int k) {
       

        return solve(nums, k) -solve(nums, k-1); 
    }
};