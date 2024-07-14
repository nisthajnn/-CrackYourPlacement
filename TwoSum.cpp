// Brute Force Solution-
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(int j=i+1 ; j<nums.size() ; j++)
            {
                if(nums[i]+nums[j]==target)
                return {i,j};
            }
        }
        return {-1};
    }
};



// Optimized Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
       vector<int>ans;
       unordered_map<int,int>mp;
       for(int i=0 ; i<nums.size() ; i++)
       {
        if(mp.find(target-nums[i])!=mp.end())
        {
            ans.push_back(i);
            ans.push_back(mp[target-nums[i]]);
        }
        mp[nums[i]]=i;
       }
       if(ans.size()==0)
       return {-1};
       return ans;
    }
};
