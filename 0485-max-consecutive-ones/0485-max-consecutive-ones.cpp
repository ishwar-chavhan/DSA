class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r = 0;
        int l = 0;
        int count = 0;
        if(nums[0] == 0 && nums.size() == 1) return 0;
        while(r<nums.size()){
            if(nums[r] == 0){
                l = r;
                r++;
                l++;
                continue;
            }
            if(nums[l] != 0){
                int temp = r - l + 1;
                if(count < temp){
                    count = temp;
                }
            }   
            r++;
        }
        return count;
    }
};