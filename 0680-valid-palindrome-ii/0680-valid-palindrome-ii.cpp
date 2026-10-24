class Solution {
public:
  
    bool isPalindrom(string s , int  i , int j){
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
  
    bool validPalindrome(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            if(s[i] != s[j]){
                return isPalindrom(s , i , j - 1) || isPalindrom(s , i + 1 , j);
            }
            j--;
            i++;
        }

        return true;

    }
};