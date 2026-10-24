#include<unordered_map>
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[1]=0;
        map[0]=0;
        int r=0;
        int l=0;
        int ans=0;
        while(r<nums.size()){
            map[nums[r]]++;

          
               
            while(map[0]>k){
                map[nums[l]]--;
                l++; 
            }

            if(map[0]<=k){
                ans=max(ans,(r-l+1));
            }
            r++;
        }
        return ans;
    }
};