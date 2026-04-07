class Solution {
public:
    string decodeString(string s) {
        stack<int> n_st;
        stack<string> st;
        int num = 0;

        for(char ch : s){
            if(isdigit(ch)){
                num = num*10 + (ch-'0');
            }
            else if(ch == '['){
                n_st.push(num);
                st.push("[");
                num = 0;
            }
            else if(ch == ']'){
                string temp="";
                while(st.top() != "["){
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop(); // remove '['
                
                int n = n_st.top(); 
                n_st.pop();

                string repeat="";
                while(n--){
                    repeat += temp;
                }
                st.push(repeat);
            }
            else{
                st.push(string(1,ch));
            }
        }

        string ans="";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};