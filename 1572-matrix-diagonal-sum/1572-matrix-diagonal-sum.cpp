class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size=mat.size();
        // int j=mat[i].size();
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=mat[i][i];
            sum+=mat[i][size-1-i];
        }
        if(size&1){
            size=size/2;
            sum-=mat[size][size];
        }
        return sum;
    }
};