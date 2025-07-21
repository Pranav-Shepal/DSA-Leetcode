class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string str="";

        int cnt=1;

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch==s[i+1]){
                cnt++;
            }
            else cnt=1;
            if(cnt>=3) continue;
            str+=s[i];
        }
        cout<<cnt;
        return str;
    }
};