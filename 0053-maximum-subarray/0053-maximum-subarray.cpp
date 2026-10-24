class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int j=nums[0];
        
        for(int k=0;k<nums.size();k++){
            i+=nums[k];

            j=max(j,i);

            if(i<0){
                i=0;
            }
        }
        return j;
    }
};