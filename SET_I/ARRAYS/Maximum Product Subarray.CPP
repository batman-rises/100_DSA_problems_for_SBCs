class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int suf = 1, pre = 1;
        int n = nums.size();
        int ans = INT_MIN;
        int maxm = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int prod = 1;
            for (int j = i; j < n; j++)
            {
                prod *= nums[j];
                maxm = max(maxm, prod);
            }
        }
        return maxm;
    }
};