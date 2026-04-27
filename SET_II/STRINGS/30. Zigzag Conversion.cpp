class Solution {
public:
    string convert(string s, int numRows) {
        //its a simulation based problem
        if(numRows==1)
            return s;
        int cycle=(numRows-1)*2;
        string ans;
        for(int i=0;i<numRows;i++){
            for(int x=i;x<s.size();x+=cycle){
                //normal
                ans+=s[x];
                if(i==0 || i==numRows-1){
                    continue;
                }
                //middle rows extra
                    int ind=x+cycle - 2*i;
                    if(ind<s.size())
                        ans+=s[ind];
            }
        }
        return ans;
    }
};