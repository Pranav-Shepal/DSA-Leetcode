class Solution {
public:

    bool isChar(char ch){
        int asc=(int)ch;
        if(asc>=97 && asc<=122 || asc>=65 && asc<=90)return true;
        return false;
    }

    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            bool isI=isChar(s[i]);
            bool isJ=isChar(s[j]);
            if(isI && isJ){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isI)i++;
            else j--;
        }
        return s;
    }
};