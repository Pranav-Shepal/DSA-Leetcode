class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=text.size();
        vector<string>v;

        stringstream ss(text);
        string t;
        while(ss>>t){
            v.push_back(t);
        }
        n=v.size();

        int cnt=0;
        for(int i=0;i<n;i++){
            string str=v[i];
            for(int j=0;j<brokenLetters.length();j++){
                char c=brokenLetters[j];
                if(str.find(c)!=string::npos){
                    cnt++;
                    break;
                }
            }
        }

        return n-cnt;

    }
};