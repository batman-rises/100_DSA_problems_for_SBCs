class Solution
{
public:
    int maxSubArray(vector<int> &a)
    {
        int n = a.size();
        int s = 0, maxm = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            if (s > maxm)
            {
                maxm = s;
            }
            if (s < 0)
                s = 0;
        }
        return maxm;
    }
};