class Solution {
public:

    bool trueORfalse(vector<int>& piles,int k, int h){
         long long int hours = 0;
        for (int p : piles)
        hours += (p + k - 1) / k;  
        return hours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int i=0;i<piles.size();i++){
            maxi=max(piles[i],maxi);
        }
        int start=1;
        int end=maxi;
        int ans=0;
        int mid=start+(end-start)/2;
        
        while(start<=end){
            if(trueORfalse(piles,mid,h)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
             mid=start+(end-start)/2;
        }
        return ans;
    }
};