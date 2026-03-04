class Solution {
public:
    void func(int i,int n,int k,vector<int> &op,vector<vector<int>> &res){
        
            if(k==op.size()){
                res.push_back(op);
                return;
            }
        if(i>n)return;
        
        //pick
        op.push_back(i);
        func(i+1,n,k,op,res);
        op.pop_back();
        func(i+1,n,k,op,res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> op;
        
        func(1,n,k,op,res);
        
        return res;
    }
};