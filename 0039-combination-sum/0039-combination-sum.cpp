class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>v,int n, int target,vector<int>nums){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(n>=nums.size())return;
        // not take
        f(ans,v,n+1,target,nums);
        // if possible - take
        if(target-nums[n]>=0) {
            v.push_back(nums[n]);
            f(ans,v,n,target-nums[n],nums);
        }
    }       

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>v;

        f(ans,v,0,target,candidates);
        return ans;
    }
};