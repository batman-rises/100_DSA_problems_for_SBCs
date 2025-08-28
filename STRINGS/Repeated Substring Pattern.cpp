class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.size();
        for (int len = n / 2; len >= 1; len--)
        {
            if (n % len == 0)
            {
                int times = n / len;
                string pat = s.substr(0, len);
                string newStr = "";
                while (times--)
                {

                    newStr += pat;
                }
                if (newStr == s)
                    return true;
            }
        }
        return false;
    }
};