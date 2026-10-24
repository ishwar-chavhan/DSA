class Solution {
    void toedit(vector<int>& nums,int size)
{
	int i=0;
	int j=0;
	while(i<size)
	{
		if(nums[i]!=INT_MIN&&nums[j]!=INT_MIN)
		{
			i++;
			j++;
		}
		else if(nums[i]==INT_MIN)
		{
			i++;
		}
		else if(nums[j]!=INT_MIN)
		{
			j++;
		}
		else if(nums[i]!=INT_MIN&&nums[j]==INT_MIN)
		{
			swap(nums[i],nums[j]);
			i++;
			j++;
		}
		
	}
}
public:
    int removeElement(vector<int>& nums, int val)
     {
          int size=nums.size();
           sort(nums.begin(), nums.end()); 
          int count=0;
          int ish=0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]==val)
            {
                nums[i]=INT_MIN;
               ish++;
            }
        }
        
        toedit(nums,size);
        for(int i=0;i<size;i++)
        {
        	if(nums[i]!=INT_MIN)
        	{
        		count++;
        	}
        }
        return count;
    }
};