class Solution {
public:
    int strStr(string haystack, string needle) { 
        int size1=haystack.length();
        int size2=needle.length();
        int ish;
        // int i=0;
        int count=0;
        for(int j=0;j<size1;j++)
        {
            if(haystack[j]==needle[0])
            {
                ish=j;
                for(int k=0;k<size2;k++)
                {
                    if(haystack[ish]==needle[k])
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    ish++;
                    if(count==size2)
                    {
                        return j;
                    }
                }
                count=0;
                
            }
        }
        return -1;
    }
};