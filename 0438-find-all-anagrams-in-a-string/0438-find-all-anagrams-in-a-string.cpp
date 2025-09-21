class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();

        vector<int>pFreq(26,0);
        vector<int>sFreq(26,0);
        vector<int>ans;

        for(char c:p) pFreq[c-'a']++;

        for(int i=0;i<n;i++){
            char ch=s[i];
            sFreq[ch-'a']++;

            if(i>=m) sFreq[s[i-m]-'a']--; // remove out of window char

            if(i>=m-1 && pFreq==sFreq) ans.push_back(i-m+1);
        }

        return ans;
    }
};