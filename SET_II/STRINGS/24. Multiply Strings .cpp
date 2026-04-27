class Solution {
public:
    string multiply(string a, string b) {
        
        int n=a.size();
        int m=b.size();
        vector<int> res(m+n);
        int i=n-1;
        //int j=m-1;
        
        while(i>=0){
            int x=a[i]-'0';
            int j=m-1;
            while(j>=0){
                int y=b[j]-'0';
                int pos_val=i+j+1;
                int pos_carry=i+j;
                int val=x*y + res[pos_val];
                res[pos_val]=val%10;
                res[pos_carry]+=(val/10);
                j--;
            }
            i--;
        }
        string final_ans="";
        for(int i:res){
            if(final_ans.empty() && i==0)
                continue;
            
                final_ans+=(i+'0');
            
        }
        return final_ans==""?"0":final_ans;

    }
};