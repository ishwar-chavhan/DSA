#include<deque>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        int i=0;
        while(i<nums.size()){
            if(!dq.empty()&& i-k+1>dq.front()){
                dq.pop_front();
            }

            while(!dq.empty() && nums[dq.back()]<nums[i] ){
                dq.pop_back();
            }

            // if(!dq.empty() && nums[dq.front()]<nums[i])
            dq.push_back(i);

            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
            i++;
        }
        return ans;
    }
};