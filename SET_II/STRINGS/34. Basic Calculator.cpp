class Solution {
public:
    int calculate(string s) {
        stack<int> st;
            long long number=0;
            int res=0;
            int sign=1;
        for(char ch:s){
            if(isdigit(ch)){
                number=(number*10)+(ch-'0');
            }else if(ch=='+'||ch=='-'){
                res+=(number*sign);
                number=0;
                sign=(ch=='+')?1:-1;
            }else if(ch=='('){
                st.push(res);
                st.push(sign);
                res=0;
                sign=1;
                number=0;
            }else if(ch == ')'){
                res+=(number*sign);
                sign=st.top();
                st.pop();
                res=res*sign;
                int val=st.top();
                st.pop();
                res+=val;
                sign=1;
                //res=0;
                number=0;
                
            }
        }
        res+=(number*sign);
        return res;
    }
};