class Solution {
public:
    bool wordPattern(string pattern, string s) {

        stringstream ss(s);
        string token="";
        vector<string> words;
        while(ss>>token){
            words.push_back(token);
        }

        unordered_map<string,char>mp1;//BIJECTION MAPPING
        unordered_map<char,string>mp2;

        int n=words.size();
        int m=pattern.size();
        if(n!=m)
            return false;

        
        for(int i=0;i<n;i++){
            string word=words[i];
            char ch=pattern[i];
            if(mp1.find(word)!=mp1.end() && mp1[word]!=ch ||
            mp2.find(ch)!=mp2.end() && mp2[ch]!=word)
                return false;
            mp1[word]=ch;
            mp2[ch]=word;
        }
        return true;
    }
};