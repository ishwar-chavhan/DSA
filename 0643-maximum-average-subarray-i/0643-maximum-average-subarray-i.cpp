class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        double maxi=INT_MIN;
        int r=0;
        int l=0;
        int count=0;
        while(r<nums.size()){
            ans=ans+nums[r];
            count++;
            if(count>=k){
                maxi=max(maxi,(ans/k));
                ans=ans-nums[l];
                l++;
            }
            r++;
        }
        return maxi;

    }
};