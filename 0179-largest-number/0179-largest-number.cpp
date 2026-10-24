#include <algorithm>
class Solution {
public:
    
  static   bool compare(int a , int b){
        string temp1 = to_string(a) + to_string(b);
        string temp2 = to_string(b) +  to_string(a);
        return temp1 > temp2;
    }

    string largestNumber(vector<int>& nums) {
    //   int sum = 0;
    //    for(int i = 0; i < nums.size(); i++){
    //         // if(nums[i] == 0)continue;
    //         sum = sum + nums[i];
    //     }
        // if(sum == 0)return "0";
        sort(nums.begin() , nums.end() , compare);
        string s;
        bool ish = true;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0 && ish)continue;

            if(nums[i] != 0 && ish) ish = false;
            
            s = s + to_string(nums[i]);
        }
        return s == "" ? "0" : s;
    }
};