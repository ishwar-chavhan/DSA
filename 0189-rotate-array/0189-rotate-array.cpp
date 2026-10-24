class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int i=0;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end()-(nums.size()-k));
    }
    
};