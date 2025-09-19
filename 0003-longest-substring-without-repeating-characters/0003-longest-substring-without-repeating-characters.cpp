class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)return 0;
        unordered_set<char>st;

        int mxlen=INT_MIN;
        int i=0,j=0;

        while(j<n){
            char c=s[j];
            if(st.find(c)!=st.end()){
                st.erase(s[i]);
                i++;
            }
            else{
                mxlen=max(mxlen,j-i+1);
                st.insert(c);
                j++;
            }
        }
        return mxlen;
    }
};