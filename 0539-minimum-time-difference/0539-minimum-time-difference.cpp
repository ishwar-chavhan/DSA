class Solution {
public:
    
    void inMinutes(string temp,  vector<int>& array){
       
        string s1;
        s1.push_back(temp[0]);
        s1.push_back(temp[1]);
       
        string s2;
        s2.push_back(temp[3]);
        s2.push_back(temp[4]);

        int ans = stoi(s1)*60 + stoi(s2);
        array.push_back(ans);
        return ;
    }

    int findMinDifference(vector<string>& timePoints) {
        
        vector<int>temp;
        for(int i = 0;i<timePoints.size();i++){
             inMinutes(timePoints[i] , temp);
        }

        sort(temp.begin() , temp.end());
        int mini = INT_MAX;
        for(int i = 1;i<temp.size();i++){
            mini = min(abs(temp[i] - temp[i-1]) , mini);
        }

        mini = min(abs((24*60 - temp[temp.size()-1]) + temp[0]) , mini);


        return mini;   
    }
};