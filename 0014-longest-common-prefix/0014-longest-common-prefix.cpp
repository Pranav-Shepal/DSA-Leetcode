class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();

        string str="";
        int fmin=INT_MAX;
        int min=0;
        for(int i=0;i<n;i++){
            min=strs[i].length();
            if(min<fmin){
                str=strs[i];
                fmin=min;
            }
        }
        string ans="";
        for(int i=0;i<fmin;i++){
            char ch=str[i];
            for(int j=0;j<n;j++){
                if(strs[j][i]!=ch)return ans;
            }
            ans+=ch;
        }
        return ans;
    }
};