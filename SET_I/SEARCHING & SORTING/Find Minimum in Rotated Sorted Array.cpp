class Solution
{
public:
    int findMin(vector<int> &a)
    {
        int n = a.size();
        int low = 0, high = n - 1;
        int ans = 1e9;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[low] <= a[mid])
            {
                ans = min(ans, a[low]);
                low = mid + 1;
            }
            else
            {
                ans = min(ans, a[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};