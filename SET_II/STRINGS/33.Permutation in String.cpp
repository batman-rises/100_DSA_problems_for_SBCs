class Solution {
public:
    bool check(int hash1[],int hash2[]){
        for(int i=0;i<26;i++){
            if(hash1[i] != hash2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int l=0;
        int r=0;
        int mp1[26]={0};
        int mp2[26]={0};
        for(char ch:s1){
            mp1[ch-'a']++;
        }
        while(r<s2.size()){
            mp2[s2[r]-'a']++;
            if((r-l+1)>m){
                mp2[s2[l]-'a']--;
                l++;
            }
            if((r-l+1) == m){
                if(check(mp1,mp2)==true)
                    return true;
                
            }
            r++;
        }
        return false;
    }
};