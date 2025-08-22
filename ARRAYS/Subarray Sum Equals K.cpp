class Solution
{
public:
    int subarraySum(vector<int> &a, int k)
    {
        int n = a.size();
        int cnt = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            int rem = s - k;
            cnt += mp[rem];
            mp[s] += 1;
        }
        return cnt;
    }
};