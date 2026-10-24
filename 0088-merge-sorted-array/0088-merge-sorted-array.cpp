class Solution {
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> b;
        int i = 0;
        int j = 0;
        while(i<=m-1 && j<=n-1){
            if(nums1[i]<nums2[j]){
                b.push_back(nums1[i]);
                i++;
            }
            else{
                b.push_back(nums2[j]);
                j++;
            }
        }

        while(i<=m-1){
            b.push_back(nums1[i]);
            i++;
        }

        while(j<=n-1){
            b.push_back(nums2[j]);
            j++;
        }

        for(int i=0;i<b.size();i++){
           nums1[i]=b[i];
        }
        
    }
};