class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if(goal<0)return 0;
        
        int ans=0;
        long long int sum=0;
        long long int i=0;
      long long  int j=0;
        while(i<nums.size()){
            sum=sum+nums[i];
            while(sum>goal){
                sum=sum-nums[j];
                j++;
            }
            ans=ans+(i-j+1);
            i++;
        }
        return ans;
    }


    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums , goal)-solve(nums,goal-1);
    }
};