class Solution {
public:
    void func(int i,vector<int>& a, int target,vector<int> &op,vector<vector<int>> &res){
        if(a.size()==i){
            if(target==0){
                res.push_back(op);
            }
                return;
        }

       if(a[i]<=target){
         //pick
        op.push_back(a[i]);
        func(i,a,target-a[i],op,res);
        //make changes for not pick
        op.pop_back();
       }
        //not pick
        func(i+1,a,target,op,res);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>> res;
        vector<int> op;
        func(0,a,target,op,res);
        return res;
    }
};