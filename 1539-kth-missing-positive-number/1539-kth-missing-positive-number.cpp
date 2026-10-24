class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxi=arr[arr.size()-1]+k;
       vector<bool> ans(maxi + 1, true);

        for(int i=0;i<arr.size();i++){
            ans[arr[i]]=false;
        }

        
        int mainAns=0;
        int count=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i]){
                count++;
            }
            if(count==k){
                mainAns=i;
                break;
            }
        }

        return mainAns;

    }
};