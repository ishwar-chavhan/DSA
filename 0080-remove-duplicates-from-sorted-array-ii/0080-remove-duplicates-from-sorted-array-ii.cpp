class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0;
     int j=0;
     while(i<nums.size()){
        if(i<2||nums[i]!=nums[j-2]){
            nums[j]=nums[i];
            j++;
        }
        i++;
     }
     return j;
        
    }
};