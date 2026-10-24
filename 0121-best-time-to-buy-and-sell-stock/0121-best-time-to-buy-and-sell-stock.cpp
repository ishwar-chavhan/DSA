class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int i=0;
     int mini=INT_MAX;
     int maxi=0;
     while(i<prices.size()){
        mini=min(mini,prices[i]);
        int sum=prices[i]-mini;
        maxi=max(maxi,sum);
        i++;
     }
     return maxi;
    }
};