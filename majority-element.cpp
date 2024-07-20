class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1, n = nums.size();
        for(int i = 0; i < n-1; i++) {
            if(nums[i] == nums[i+1])    count++;
            else {
                if(count > (n/2))   return nums[i];
                count = 1;
            }
        }
        if(count > (n/2))   return nums[n-1];
        return 0;
    }
};