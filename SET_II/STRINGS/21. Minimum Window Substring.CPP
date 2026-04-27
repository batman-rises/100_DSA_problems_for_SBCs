class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int> mp;
        for(char ch:t){
            mp[ch]++;
        }
        int minWindowSize=1e8;
        int firstInd=0;
        int countRequired=m;
        int l=0,r=0;
        while(r<n){
            char ch=s[r];
            if(mp[ch]>0){
                countRequired--;
            }
            mp[ch]--;
            while(countRequired==0){
                int curWindowSize=r-l+1;
                if(curWindowSize < minWindowSize){
                    minWindowSize=curWindowSize;
                    firstInd=l;
                }
                //shrink
                char ch2=s[l];
                mp[ch2]++;
                
                if(mp[ch2]>0){
                    countRequired++;
                }
                l++;
            }
            r++;
        }
        return minWindowSize == 1e8 ? "" : s.substr(firstInd,minWindowSize);
    }
};