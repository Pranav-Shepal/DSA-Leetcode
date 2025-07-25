class Solution {
public:

    bool odd(char ch){
        int n=(int)ch-48;
        if(n%2==0)return false;
        return true;
    }

    string largestOddNumber(string num) {
        int n=num.length();

        for(int i=n-1;i>=0;i--){
            char ch=num[i];
            if(odd(ch)){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};