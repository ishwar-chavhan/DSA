#include<unordered_map>
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>fre;

      long long int r=0,l=0;
        long long int ans=0;
       long long int sum=0;
        while(r<nums.size()){
           fre[nums[r]]++;
             sum += nums[r];
             
           if(r-l+1>k){
            fre[nums[l]]--;
            if(fre[nums[l]]==0)fre.erase(nums[l]);
            sum=sum-nums[l];
            l++;
           }
          
         

         if(r+1-l==k && fre.size()==k)
         ans=max(ans,sum);

           r++;
        }
        return ans;
    }
};