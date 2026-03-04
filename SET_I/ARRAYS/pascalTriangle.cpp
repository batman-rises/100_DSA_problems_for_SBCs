vector<int> helper(int row)
{
    vector<int> temp;
    int ans = 1;
    temp.push_back(ans);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        temp.push_back(ans);
    }
    return temp;
}

vector<vector<int>> PT(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
        ans.push_back(helper(i));
    }
    return ans;
}