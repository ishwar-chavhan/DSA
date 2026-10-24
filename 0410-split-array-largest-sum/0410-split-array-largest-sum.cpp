class Solution {
public:
 

    bool helperFunction(vector<int>& nums, int k,int mid){
       int sum=0;
       int count=1;
       for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=mid)
        {
            sum+=nums[i];
        }else{
            sum=nums[i];
            count++;
        }
       }

    //    if(sum>=mid)count++;

       return count<=k;
    }


    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        int ans=0;
        int start=maxi,end=sum,mid;
        while(start<=end){
            mid=start+(end-start)/2;
           if(helperFunction(nums,k,mid)){
            ans=mid;
            end=mid-1;
           }else{
            start=mid+1;
           }
        }
        return ans;
        
    }
};