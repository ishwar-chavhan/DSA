#include<unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>fre;
        int r=0;
        int l=0;
        int ans=0;
        while(r<s.size()){
            fre[s[r]]++;

            while(fre[s[r]]>1){
                 fre[s[l]]--;
                 l++;
            }

            ans=max(ans,(r-l+1));
            r++;
        }
        return ans;
    }
};