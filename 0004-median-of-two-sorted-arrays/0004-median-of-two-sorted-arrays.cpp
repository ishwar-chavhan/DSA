class Solution {
   float  tomerge(vector<int>& nums1, int n, vector<int>& nums2, int m)
    {
        int sum=n+m;
     int *arr=new int[sum];
     
     int i;
     for( i=0;i<n;i++)
     {
        arr[i]=nums1[i];
     }
     for(int j=0;j<m;j++)
     {
        arr[i]=nums2[j];
        i++;
     }
     int start=0;
     int end=sum-1;
   float sum1=0;
     int mid=start+(end-start)/2;
     sort(arr,arr+sum);
     if(sum&1)
     {
       sum1=arr[mid];
     }
     if(sum%2==0)
     {
        sum1=(arr[mid]+arr[mid+1]);
        sum1=sum1/2;
     }
     return sum1;

    }

public:
float ish;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
         ish=tomerge(nums1,n,nums2,m);
    return ish;
    }
    
};