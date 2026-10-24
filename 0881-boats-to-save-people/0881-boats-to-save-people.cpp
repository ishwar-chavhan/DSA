class Solution {
public:
    int solve(vector<int>& people, int limit){
        int i=0;
        int j=people.size()-1;
        int count=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                count++;
                j--;
                i++;
            }
            else if(people[i]+people[j]>limit){
                count++;
                j--;
            }
           
        }
        return count;
    }
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        return solve(people , limit);
    }
};