class Solution
{
public:
    void rotate(vector<int> &a, int k)
    {
        int n = a.size();
        k = k % n;
        vector<int> temp;
        for (int i = n - k; i < n; i++)
        {
            temp.push_back(a[i]);
        }
        for (int i = n - k - 1; i >= 0; i--)
        {
            a[i + k] = a[i];
        }
        int j = 0;
        for (int i = 0; i < k; i++)
        {
            a[i] = temp[j];
            j++;
        }
        return;
    }
};