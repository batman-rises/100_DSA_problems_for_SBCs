class Solution {
public:
    void func(int i,string digits,vector<string> &res,string &op,unordered_map<int,string>mp){
        if(i==digits.size()){
            res.push_back(op);
            return;
        }
        string letters=mp[digits[i]-'0'];
        for(char ch:letters){
            op.push_back(ch);
            func(i+1,digits,res,op,mp);
            op.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mp={
            {0,""},{1,""},{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},
            {9,"wxyz"}
        };
        
        vector<string> res;
        string op="";
        func(0,digits,res,op,mp);
        return res;
    }
};