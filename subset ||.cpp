class Solution {
public:
    void subset(int index,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans){
        ans.push_back(temp);

        for(int i = index;i < nums.size(); i++){
            if(i > index && nums[i] == nums[i-1]) continue;

            temp.push_back(nums[i]);
            subset(i+1,nums,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());

        subset(0, nums, ds, ans);
        return ans;
    }
};
