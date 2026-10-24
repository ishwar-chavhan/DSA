class Solution {
  
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        // if(nums.size() == 1){
        //     return 1;
        // }

        while(i < nums.size()){
            if(nums[j] != nums[i]){
                nums[j+1] = nums[i];
                j++;
            }
            i++;
        }
      
       return j+1;
    }
};