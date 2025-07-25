class Solution {
public:

    string f(string str){
        string a="";
        for(int i=1;i<str.length()-1;i++){
            a+=str[i];
        }
        return a;
    }

    string removeOuterParentheses(string s) {
        int n=s.length();

        int l=0,r=0;
        string ans="";
        string str="";
        for(int i=0;i<n;i++){
            str+=s[i];
            if(s[i]=='(')l++;
            else if(s[i]==')')r++;
            if(l==r){
                ans+=f(str);
                str="";
            }
        }
        return ans;
    }
};