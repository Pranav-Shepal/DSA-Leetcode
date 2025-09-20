class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();

        int mxlen=INT_MIN;
        string ans="";
        for(int i=0;i<n;i++){
            int l=i,r=i;
            // for odd length
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>mxlen)ans=s.substr(l,r-l+1);
                mxlen=max(mxlen,r-l+1);
                l--;r++;
            }

            // for even length
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>mxlen)ans=s.substr(l,r-l+1);
                mxlen=max(mxlen,r-l+1);
                l--;r++;
            }
        }
        cout<<mxlen;
        return ans;
    }
};