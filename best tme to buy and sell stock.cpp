class Solution {
public:
    int maxProfit(vector<int>&prices)
    {
        int mini=INT_MAX;
        int op=0;
        int pro=0;
        for(int i=0 ; i<prices.size() ; i++)
        {
           if(mini>prices[i])
           mini=prices[i];
           op=prices[i]-mini;
           if(op>pro)
           pro=op;
        }
        return pro;
    }
};