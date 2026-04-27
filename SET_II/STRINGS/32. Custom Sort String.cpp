class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.size();i++){
            char ch=order[i];
            mp[ch]=i;
        }
        //used a custom comparator
        auto myComparator=[&mp](char a,char b){
            return mp[a]<mp[b];
        };
        sort(s.begin(),s.end(),myComparator);
        return s;
    }
};