class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int arr[2];
        int size=nums.size();
        int start=0;
        int end=size-1;
        int first=INT_MIN;
        int last=INT_MIN;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        int start1=0;
        int end1=size-1;
        int mid1=start1+(end1-start1)/2;
        while(start1<=end1)
        {
            if(nums[mid1]==target)
            {
                last=mid1;
                start1=mid1+1;
            }
            else if(nums[mid1]<target)
            {
                start1=mid1+1;
            }
            else
            {
                end1=mid1-1;
            }
            mid1=start1+(end1-start1)/2;
        }
  if(first==INT_MIN&&last==INT_MIN)
    {
        first=-1;
        last=-1;
    }
    
    return {first,last};
    }
   
};