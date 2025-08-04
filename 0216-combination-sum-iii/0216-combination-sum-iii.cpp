class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>&v,int k,int target,int start,int n){

        if(v.size()==k && target==0){
            ans.push_back(v);
            return;
        }
        if(v.size()>k || target<0)return;

        for(int i=start;i<=9;i++){
            v.push_back(i);
            f(ans,v,k,target-i,i+1,n);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;

        f(ans,v,k,n,1,n);
        return ans;
    }
};