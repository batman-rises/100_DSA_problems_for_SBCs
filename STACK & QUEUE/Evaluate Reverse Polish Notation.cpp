class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (string s : tokens)
        {
            if (s == "+")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b + a);
            }
            else if (s == "-")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b - a);
            }
            else if (s == "*")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b * a);
            }
            else if (s == "/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b / a); // b divided by a
            }
            else
            {
                st.push(stoi(s)); // string → int
            }
        }
        return st.top();
    }
};
