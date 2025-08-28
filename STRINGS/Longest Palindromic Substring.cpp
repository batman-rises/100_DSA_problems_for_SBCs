class Solution
{
public:
    string helper(string s, int l, int r)
    {
        int n = s.size();
        while (l >= 0 && r < n && s[l] == s[r])
        {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    string longestPalindrome(string s)
    {
        int n = s.length();
        if (n < 2)
            return s;
        string best = "";
        for (int i = 0; i < n; i++)
        {
            // odd length palindrom
            string p1 = helper(s, i, i);
            if (p1.size() > best.size())
                best = p1;
            // even length palindrom
            string p2 = helper(s, i, i + 1);
            if (p2.size() > best.size())
                best = p2;
        }
        return best;
    }
};