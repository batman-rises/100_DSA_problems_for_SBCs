class Solution {
public:
    string removeDuplicateLetters(string s) {
        int hash[26]={-1};
        fill(hash,hash+26,-1);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            hash[ch-'a']=i;
        }
        int vis[26]={0};
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(st.empty()){
                st.push(ch);
                vis[ch-'a']=1;
                continue;
            }

            if(vis[ch-'a'] == 1) continue;//ye line bhot crucial hai


            while(!st.empty() && st.top()>ch && hash[st.top()-'a']>i){
                vis[st.top()-'a']=0;
                st.pop();
            }
            if(vis[ch-'a']==0){
                st.push(ch);
                vis[ch-'a']=1;
            }
        }
        string ans="";
        while(!st.empty()){
            char ch=st.top();
            st.pop();
            ans=ch+ans;
        }
        return ans;
    }
};