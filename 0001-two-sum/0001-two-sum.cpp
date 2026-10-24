#include<map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map<int,vector<int>>temp;
    for(int i=0;i<nums.size();i++){
        temp[nums[i]].push_back(i);
    }

    sort(nums.begin(),nums.end());
    int start=0;
    vector<int>ans;
    int end=nums.size()-1;
    int i=0;
    while(start<end){
        if(nums[start]+nums[end]==target){
           auto it1 = temp.find(nums[start]);
           auto it2 = temp.find(nums[end]);

           if(nums[start]!=nums[end]){
            if(it1 != temp.end()){
            ans.push_back(it1->second[0]);
            i++;
           }

           if(it2 != temp.end()){
            ans.push_back(it2->second[0]);
           }
           }
           else{
            if(it1 != temp.end()){
            ans.push_back(it1->second[0]);
            i++;
           }

           if(it2 != temp.end()){
            ans.push_back(it2->second[1]);
           }
           }

           break;
        }
        else if(nums[start]+nums[end]>target){
            end--;
        }
        else{
            start++;
        }
    }
    
    return ans;
    }
};