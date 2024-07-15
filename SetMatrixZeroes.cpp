class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        unordered_map<int,bool>rmp;
        unordered_map<int,bool>cmp;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0 ; i<m ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(matrix[i][j]==0)
                {
                    rmp[i]=true;
                    cmp[j]=true;
                }
            }
        }
         for(int i=0 ; i<m ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                if(rmp[i] or cmp[j])
                {
                    matrix[i][j]=0;
                }
            }
        }
    
    }
};