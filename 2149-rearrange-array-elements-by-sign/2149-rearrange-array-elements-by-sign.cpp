class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>0) pos.push_back(nums[i]);
             if(nums[i]<0) neg.push_back(nums[i]);
             i++;
        }
        nums={};
        i=0;
        while(i<pos.size())
        {
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
            i++;
        }
        return nums;
    }

};