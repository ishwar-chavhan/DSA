#include<unordered_map>
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int r=0,l=0;
        unordered_map< int , int > fre;
        while(r<fruits.size()){
            fre[fruits[r]]++;

            while(fre.size()>2){
                fre[fruits[l]]--;
                if(fre[fruits[l]]==0){
                    fre.erase(fruits[l]);
                }
                l++;
            }
            if(fre.size()<=2){
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
    }
};