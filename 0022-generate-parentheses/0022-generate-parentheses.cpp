class Solution {
public:

    void f(vector<string>& ans,string str,int ob,int cb,int n){
        if(ob==cb && ob==n){
            ans.push_back(str);
            return;
        }
        if(ob<n) f(ans,str+"(",ob+1,cb,n);
        if(cb<ob) f(ans,str+")",ob,cb+1,n);
    }

    vector<string> generateParenthesis(int n) {
        int ob=0,cb=0;
        vector<string>ans;
        string str="";

        f(ans,str,0,0,n);
        return ans;
    }
};