// method 1
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] == nums[i])
                return true;
        }
        return false;
    }
};
// method 2
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[nums[i]] >= 2)
                return true;
        }
        return false;
    }
};