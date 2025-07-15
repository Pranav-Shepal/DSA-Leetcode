class Solution {
public:

    bool IsVowel(char ch){
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U') return true;
        else return false;
    }

    bool IsConsonent(char ch){
        if((int(ch)>=92 && int(ch)<=122) || (int(ch)>=65 && int(ch)<=92) ) return true;
        return false;
    }
    bool isNum(char ch){
        int num=int(ch);
        if((int(num)>=48 && int(num)<=57)) return true;
        return false;
    }

    bool isValid(string word) {
        int n=word.length();

        int minChar=0;
        bool isVowel=false;
        bool isConsonent=false;


        for(int i=0;i<n;i++){
            char ch=word[i];
            if(IsVowel(ch)){
                minChar++;
                isVowel=true;
            }
            else if(IsConsonent(ch)){
                minChar++;
                isConsonent=true;
            }
            else if(isNum(ch)){
                minChar++;
            }
            else return false;
        }
        if(minChar<3)return false;
        if(!isVowel)return false;
        if(!isConsonent)return false;

        return true;
    }
};