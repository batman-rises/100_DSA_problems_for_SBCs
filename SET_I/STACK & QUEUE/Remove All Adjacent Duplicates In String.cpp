class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop(); // duplicate mila, remove kar do
            }
            else
            {
                st.push(c); // otherwise add
            }
        }
        string res = "";
        while (!st.empty())
        {
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
};