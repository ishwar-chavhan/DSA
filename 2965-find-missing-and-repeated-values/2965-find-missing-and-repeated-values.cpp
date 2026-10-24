#include <map>
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>fre;
        vector<int>ans;
        int maxElement=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++){
                fre[grid[i][j]]++;
               maxElement++;
            }
        }
        int sum=0;
        for(auto it : fre) {
           if(it.second>1)
           {
            ans.push_back(it.first);
           }
           sum=sum+it.first;
        }
        int sum2=0;
        for(int i=0;i<=maxElement;i++){
            sum2=sum2+i;
        }
        ans.push_back(sum2-sum);
            return ans;
    }
};