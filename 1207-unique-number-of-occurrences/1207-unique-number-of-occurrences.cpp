#include<map>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

    //    
     map<int,int>fre;
       for(int i=0;i<arr.size();i++){
        fre[arr[i]]++;
       }
       vector<int>ans;

       for(auto ish:fre){
        ans.push_back(ish.second);
       }
       sort(ans.begin(),ans.end());
       for(int i=1;i<ans.size();i++){
        if(ans[i-1]==ans[i])return false;
       }

       return true;
    }
};