#include<deque>
#include <algorithm>

class Solution {
public:
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        int l=0;
        int r=0;
        deque<int>dq;
        long long int sum=0;
         long long int maxi=0;
        while(r<chargeTimes.size()){
            sum=sum+runningCosts[r];

            while(!dq.empty() && chargeTimes[dq.back()] < chargeTimes[r]){
                dq.pop_back();
            }
            dq.push_back(r);

            

            if(budget < (sum*(r-l+1))+ chargeTimes[dq.front()]){
                sum=sum-runningCosts[l];
                l++;
            }
            else{
                maxi=max(maxi, (long long)(r-l+1));
            }

            if(!dq.empty() && l>dq.front()){
                dq.pop_front();
            }

         
      
            r++;
        }
        return maxi;
    }
};