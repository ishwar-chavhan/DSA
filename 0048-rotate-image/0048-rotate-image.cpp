class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        

        for(int i=0;i<matrix.size();i++){
            int last = matrix[0].size()-1;
            int first=0;
            while(first<last){
            swap(matrix[i][first],matrix[i][last]);
            first++;
            last--;
            }
        }
    }
};