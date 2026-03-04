class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        int n = strs.size();
        string last = strs[n - 1];
        int i = 0;
        while (i < first.size())
        {
            if (first[i] != last[i])
                break;
            i++;
        }
        return first.substr(0, i);
    }
};