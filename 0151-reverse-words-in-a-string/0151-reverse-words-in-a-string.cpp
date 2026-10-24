class Solution {
public:
    string reverseWords(string s) {
        string temp;
       vector<string> ans;

        for(int i=0;i<s.size();i++){
            if(s[i]!= ' '){
                temp=temp+s[i];
            }else{
               if(temp.size()>0)ans.push_back(temp);

                temp="";
            }
        }
        if(temp.size()>0)ans.push_back(temp);
       
       if(ans.empty()) return "";
       string ans1;
       int i = ans.size()-1;
       while(i>=0){
        ans1 = ans1 + ans[i];
         if(i != 0) {  ans1 = ans1 + " "; }
        i--;
       }
       
        return ans1;
        
    }
};