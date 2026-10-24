
#include<unordered_map>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        unordered_map<char , int>fre1;
         unordered_map<char , int>fre2;
         for(int i=0;i<k;i++){
            fre1[s1[i]]++;
         }

         int r=0;
         int l=0;

         while(r<s2.size()){
          
            fre2[s2[r]]++;

           

            if(r+1-l>k){
                fre2[s2[l]]--;
                if(fre2[s2[l]]==0){
                    fre2.erase(s2[l]);
                }
                l++;
            }
            if(fre1==fre2 ){
                return true;
            }
            r++;
         }

         return false;

    }
};