class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int minLen=INT_MAX;

        for(int i=0;i<n;i++){
            int l=strs[i].length();
            minLen=min(minLen,l);
        }
        bool flag=false;
        string ans="";
        for(int i=0;i<minLen;i++){
            char c=strs[0][i];
            flag=true;
            for(int j=0;j<n;j++){
                if(strs[j][i]!=c){
                    flag=false;
                    break;
                }
            }
            if(!flag)break;
            ans+=c;
        }

        return ans;
    }
};