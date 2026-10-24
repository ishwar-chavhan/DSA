#include <algorithm>
class Solution {
public:
    
   
   
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count=0;

        sort(players.begin(),players.end(),greater<int>());
          sort(trainers.begin(),trainers.end());
          multiset<int> setAns;
          for(int i=0;i<trainers.size();i++){
            setAns.insert(trainers[i]);
          }


        for(int i=0;i<players.size();i++){
          auto it = setAns.lower_bound(players[i]);
            if(it != setAns.end()){
                setAns.erase(it);
                count++;
            }
        }
        return count;
    }
};