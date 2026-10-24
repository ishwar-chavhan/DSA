#include<map>
class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
     sort(nums.begin() , nums.end());
     if(nums.size() <= 1 )return nums[0];

    //  int comp = nums.size()/2;
     int i = 0;
     int j = 1;
     int ans = 0;
     int count = 0;
     while(j < nums.size()){
        if(nums[i] != nums[j]){
            if(count < j - i){
                count = j - i;
                ans = nums[j-1];
            }
            i = j;
        }
        j++;
     }

            if(count < j - i){
                ans = nums[j-1];
            }
      
   
     return ans;

    }
};