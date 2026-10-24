#include<map>
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    
    vector<pair<int,int>>ish;

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                ish.push_back({i,j});
            }
        }
    }
    for(int j=0;j<ish.size();j++){
        // cout<<ish.first<<" "<<ish.second<<endl;

        for(int i=0;i<matrix[0].size();i++){
            matrix[ish[j].first][i]=0;
        }

        for(int i=0;i<matrix.size();i++){
            matrix[i][ish[j].second]=0;
        }
    }

    }
};