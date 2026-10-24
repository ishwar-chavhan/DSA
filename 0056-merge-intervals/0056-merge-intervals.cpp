class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>output=intervals[0];

        vector<vector<int>>ans;
        int i=1;
        while(i<intervals.size()){
            if(output[1]>=intervals[i][0]){
               output[1]=max(intervals[i][1],output[1]); 
            }
            else{
                ans.push_back(output);  
                output=intervals[i];
            }
            i++;
        }
      ans.push_back(output);  
        return ans;
    }
};