class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();

        int l=0;
        int r=n-1;
        string fans="";
        string ans="";

        for(int i=0;i<n;i++){
            ans="";
            l=r=i;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                ans=s.substr(l,r-l+1);
                if(ans.length()>fans.length()){
                    fans=ans;
                }
                l--;
                r++;
            }
            
            l=i;r=i+1;
            while(l>=0 && r<=n-1 && s[l]==s[r]){
                ans=s.substr(l,r-l+1);
                if(ans.length()>fans.length()){
                    fans=ans;
                }
                l--;
                r++;
            }
        }

        return fans;
    }
};