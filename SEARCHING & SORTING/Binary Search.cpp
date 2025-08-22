class Solution
{
public:
    int search(vector<int> &a, int k)
    {
        int n = a.size();
        int l = 0, h = n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (a[mid] == k)
                return mid;
            else if (a[mid] <= k)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return -1;
    }
};