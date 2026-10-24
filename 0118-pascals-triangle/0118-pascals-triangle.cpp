class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        ans.push_back({1});
        int i=1;
        while(i<numRows){
            vector<int>output1=ans[i-1];
            vector<int>output2;
            output2.push_back(1);

            int j=1;
            while(j<output1.size()){
                int temp=output1[j]+output1[j-1];
                output2.push_back(temp);
                j++;
            }
            output2.push_back(1);
            ans.push_back(output2);
            i++;
        }
        return ans;
    }
};