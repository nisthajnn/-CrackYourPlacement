// Brute Force Solution-gives TLE
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        set<vector<int>>st;
        vector<int>ans;
        int n=nums.size();
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                for(int k=j+1 ; k<n ; k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                  
                }
            }
        }
            vector<vector<int>>answer(st.begin(),st.end());
            return answer;
    }
};





// optimized approach-
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
       vector<vector<int>>ans;
       for(int i=0 ; i<nums.size() ; i++)
       {
        if(i>0 and nums[i]==nums[i-1])
        continue;
         int j=i+1;
         int k=nums.size()-1;
          while(j<k)
          {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0)
            {
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
            while(j<k and nums[j]==nums[j-1])
            {
                j++;
            }
            while(k>0 and nums[k]==nums[k+1])
            {
                k--;
            }
          }
          else if(sum<0)
          {
            j++;
          }
          else
          {
            k--;
          }
       }
       }
       return ans;    
    }
};