class Solution
{
public:
    void moveZeroes(vector<int> &a)
    {
        int n = a.size();
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
            return;
        for (int i = index + 1; i < n; i++)
        {
            if (a[i] != 0)
            {
                swap(a[i], a[index]);
                index++;
            }
        }
        return;
    }
};

// method 2
class Solution
{
public:
    void moveZeroes(vector<int> &a)
    {
        int n = a.size();

        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                temp.push_back(a[i]);
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            a[i] = temp[i];
        }
        for (int i = temp.size(); i < n; i++)
        {
            a[i] = 0;
        }
        return;
    }
};