class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int j=0;
        for(int i=j+1 ; i<n ; i++)
        {
            if(nums[j]!=nums[i])
            {
                nums[j+1]=nums[i];
                j++;
            }
        }
        return j+1;
    }
};
