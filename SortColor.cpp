class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int i=0;
        int m=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[m]);
                i++;
                m++;
            }
            else if(nums[i]==1)
            {
                i++;
            }
            else
            {
                swap(nums[i],nums[j]);
                j--;
            }
        }    
    }
};