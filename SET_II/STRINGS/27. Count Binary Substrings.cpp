class Solution {
public:
    int countBinarySubstrings(string s) {
        int res=0;
        int cnt=1,prevCnt=0;
        int n=s.size();

        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                cnt++;
            }else{
                res+=min(cnt,prevCnt);
                prevCnt=cnt;
                cnt=1;
            }
        }
        return res+min(cnt,prevCnt);
    }
};