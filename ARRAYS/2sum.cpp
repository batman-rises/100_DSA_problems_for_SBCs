class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int target)
    {
        unordered_map<int, int> mp;
        int n = a.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int moreNeeded = target - a[i];
            if (mp.find(moreNeeded) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[moreNeeded]);
            }
            mp[a[i]] = i;
            // for(int j=i+1;j<n;j++){
            //     if(i!=j){
            //         if(a[i]+a[j]==target){
            //             ans.push_back(i);
            //              ans.push_back(j);
            //         }
            //     }
            // }
        }
        return ans;
    }
};