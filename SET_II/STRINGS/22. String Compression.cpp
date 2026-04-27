class Solution {
public:
    int compress(vector<char>& chars) {
        int n=0;
        char prevChar=chars[0];
        int index=0;
        int cnt=1;
        for(int i=1;i<chars.size();i++){
            char ch=chars[i];
            if(ch==prevChar){
                cnt++;
            }else{
                chars[index]=prevChar;
                index++;
                prevChar=ch;
                if(cnt>1){
                    string str_cnt=to_string(cnt);
                    for(char ch:str_cnt){
                        chars[index++]=ch;
                    }
                }
                cnt=1;
            }
        }
        
        return index;
    }
};