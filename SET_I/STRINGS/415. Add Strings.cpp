class Solution {
public:
    string addStrings(string a, string b) {
        int n=a.size();
        int m=b.size();
        int i=n-1,j=m-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0 || carry){
            int x=(i>=0) ? a[i]-'0' : 0;
            int y=(j >= 0) ? b[j]-'0' : 0;
            
            int sum=x+y+carry;
            res+=to_string(sum%10);
            carry=sum/10;
            i--;j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};