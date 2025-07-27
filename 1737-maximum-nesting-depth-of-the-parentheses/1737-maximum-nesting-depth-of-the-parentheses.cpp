class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int mx=0;
        int fmx=INT_MIN;

        for(int i=0;i<n;i++){
            if(s[i]=='(')mx++;
            else if(s[i]==')')mx--;
            fmx=max(fmx,mx);
        }
        return fmx;
    }
};