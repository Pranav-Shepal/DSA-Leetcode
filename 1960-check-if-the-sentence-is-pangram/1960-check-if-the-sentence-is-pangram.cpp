class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();

        vector<int>v(26,0);

        for(int i=0;i<n;i++){
            int pos=sentence[i]-97;
            v[pos]=1;
        }
        for(int i=0;i<26;i++){
            if(v[i]==0)return false;
        }
        return true;
    }
};