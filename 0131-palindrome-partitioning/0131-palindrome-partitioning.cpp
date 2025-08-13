class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        f(s,0,ans,v);
        return ans;
    }

    void f(string s,int start,vector<vector<string>>& ans,vector<string>& v){
        if(start==s.length()){
            ans.push_back(v);
            return;
        }

        for(int i=start;i<s.length();++i){
            if(isPalindrome(s,start,i)){
                v.push_back(s.substr(start,i-start+1));
                f(s,i+1,ans,v);
                v.pop_back();
            }
        }
    }

    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
};