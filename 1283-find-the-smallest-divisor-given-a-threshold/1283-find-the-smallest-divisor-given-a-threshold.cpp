#include <cmath>
class Solution {
public:
    
    bool helperFunction(vector<int>& nums, int threshold,int mid){
        int check=0;
        for(int i=0;i<nums.size();i++){
            check=check+(nums[i]-1+mid)/mid;
            if (check > threshold) return false; 
        }
        return check<=threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
      int sum=0;
      int ans=0;
      for(int i=0;i<nums.size();i++){
        sum=max(sum,nums[i]);
      }
      
      int start=1;
      int end=sum;
      while(start<=end){
        int mid=start+(end-start)/2;
        if(helperFunction(nums,threshold,mid)){
            ans=mid;
             end=mid-1; 
        }else{
            start=mid+1;
        }
      }
      return ans;

    }
};