class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=i+1;

        while(j<nums.size() && i<nums.size()){
            if(nums[i]!=0){
                i++;
                j=i+1;
            }
            else if(nums[j]==0 && j < nums.size()){
                j++;
            }
            else{
              swap(nums[i],nums[j]);
              i++;
              j++;
            }

        }
    }
};