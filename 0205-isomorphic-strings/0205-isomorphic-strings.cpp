class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        int n=s.length();

        unordered_map<char,char>mp;
        unordered_map<char,char>mp1;
        for(int i=0;i<n;i++){
            mp[s[i]]=t[i];
            mp1[t[i]]=s[i];
        }
        
        for(int i=0;i<n;i++){
            if(mp[s[i]]!=t[i] || mp1[t[i]]!=s[i])return false;
        }

        return true;

    }
};