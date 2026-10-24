#include<cmath>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    //  cout<<   ceil(5.2);
    sort(nums.begin(),nums.end());
    int size=nums.size();
    if(nums.empty()) return {};
    int comp=(size/3);
    

    int i=0;
	int j=1;
	int k=0;
	while(j<nums.size()){
		if(nums[i]!=nums[j]){
			if(j-i>comp)
			{
				nums[k]=nums[i];      
				k++;
			}
                i=j;
		}
			j++;
	}
    if(j-i>comp){
        nums[k]=nums[i];
        k++;
    }
	nums.erase(nums.begin()+k,nums.end());
      return  nums;
    }
};