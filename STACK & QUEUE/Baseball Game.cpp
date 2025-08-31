class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> x; // record of scores

        for (string c : ops)
        {
            if (c == "C")
            {
                x.pop_back(); // remove last
            }
            else if (c == "D")
            {
                x.push_back(2 * x.back()); // double last
            }
            else if (c == "+")
            {
                int n = x.size();
                x.push_back(x[n - 1] + x[n - 2]); // sum of last two
            }
            else
            {
                x.push_back(stoi(c)); // convert string to int and add
            }
        }

        return accumulate(x.begin(), x.end(), 0); // sum of scores
    }
};
