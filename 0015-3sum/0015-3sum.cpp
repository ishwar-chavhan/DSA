class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
      
        vector<int>output;
        vector<vector<int>>ans;
        while(i<nums.size()-2){

            if(i>0 &&nums[i]==nums[i-1]){i++ ; continue;}
              int k=i+1;
              int j=nums.size()-1;
              while(k<j){

                 output={};
                if(nums[i]+nums[k]+nums[j]==0){
                    output.push_back(nums[i]);
                    output.push_back(nums[k]);
                    output.push_back(nums[j]);
                    ans.push_back(output);
                    k++;
                    j--;
                    while(k<j && nums[k]==nums[k-1])k++;
                    while(k<j && nums[j]==nums[j+1])j--;
                }
                else if (nums[i]+nums[k]+nums[j]<0){
                    k++;
                }
                else{
                    j--;
                }
              }
              i++;
            
        }

        return ans;
    }
};