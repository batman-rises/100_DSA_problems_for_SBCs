class Solution {
public:
    void func(int open,int close,vector<string> &res,string op){
        if(open==0 && close==0){
            res.push_back(op);
        }
        if(open!=0){
            func(open-1,close,res,op+'(');
        }
        if(close > open){
            func(open,close-1,res,op+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        func(n,n,res,"");
        return res;
    }
};