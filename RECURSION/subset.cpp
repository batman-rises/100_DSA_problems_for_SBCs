class Solution {
public:
    void func(vector<int>& nums,int i,vector<int>& subset,vector<vector<int>> &ans){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        //pick
        subset.push_back(nums[i]);
        func(nums,i+1,subset,ans);
        //not pick
        subset.pop_back();
        func(nums,i+1,subset,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        func(nums,0,subset,ans);
        return ans;
    }
};