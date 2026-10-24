class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        int i=0;
        int output=0;
        while(i<nums.size()){
            int start=0;
            int end=nums.size()-1;

            while(start<end){
                if(i==start){
                    start++;
                    continue;
                }
                if(i==end){
                    end--;
                    continue;
                }
                int sum=nums[i]+nums[start]+nums[end];
                if(sum == target){
                    return sum;
                    
                }
                else if(sum>target){
                    if(ans>abs(target-sum)){
                        ans=abs(target-sum);
                        output=sum;
                    }
                    end--;
                }
                else{
                    if(ans>abs(target-sum)){
                        ans=abs(target-sum);
                        output=sum;
                    }
                    start++;
                }
            }
            i++;
            
        }
return output;

    }
};