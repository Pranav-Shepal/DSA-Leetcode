class Solution {
public:

    void helper(vector<string>& ans,string str,int ob,int cb,int n){
        if(ob==cb && ob==n){
            ans.push_back(str);
            return;
        }
        if(ob<n)helper(ans,str+"(",ob+1,cb,n);
        if(cb<ob)helper(ans,str+")",ob,cb+1,n);
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,"",0,0,n);
        return ans;
    }
};