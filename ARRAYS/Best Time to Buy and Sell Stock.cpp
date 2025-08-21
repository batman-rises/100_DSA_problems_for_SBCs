class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minm = prices[0];
        int n = prices.size();
        int maxm = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int profit = prices[i] - minm;
            maxm = max(maxm, profit);
            minm = min(minm, prices[i]);
        }
        return maxm;
    }
};