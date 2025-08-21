class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int a : nums)
        {
            mp[a]++;
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};