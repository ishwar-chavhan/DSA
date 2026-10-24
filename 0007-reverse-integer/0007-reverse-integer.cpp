class Solution {
public:
    long long int reverse(long long int x) {
  long long int i=x;
  long long int ish=1;
 long long int multi=1;
  long long int j=0;
  while(i!=0)
  {
    ish=multi*1;
    multi=multi*10;
    i=i/10;
    j++;
  }
    j=j+1;
    long long int ish1=10;
    long long int maxi=0;
    while(j!=0)
    {
        long long int ans=x%ish1;
        maxi=(ish*ans)+maxi;
        ish=ish/10;
        x=x/10;
        j--;
    }
        if(x<0)
    {
        maxi=~maxi;
    }
    if(INT_MIN<=maxi&&INT_MAX>=maxi)
    {
        return maxi;
    }
    else
    {
        return 0;
    }

    
    
    }
};