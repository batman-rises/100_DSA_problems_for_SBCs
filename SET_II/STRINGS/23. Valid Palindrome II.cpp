class Solution {
public:
    bool check(string &s,int l,int r){
        while(l<r){
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            //when there's a mismatch we can delete either from left or right so two options
            else{
                return (check(s,l+1,r)||check(s,l,r-1));
                    //return true;
            }
           
        }
        return true;
    }
};