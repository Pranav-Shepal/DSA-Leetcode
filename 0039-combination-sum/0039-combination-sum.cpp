class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>&v,int n, int target,vector<int>nums){
        if(target==0){
            ans.push_back(v);
            return;
        }
        // if(n==nums.size()-1){
        //     if(nums[n]==target){
        //         v.push_back(nums[n]);
        //         ans.push_back(v);
        //         v.pop_back();
        //     }
        //     return;
        // }
        if(n>=nums.size())return;
        f(ans,v,n+1,target,nums);
        if(target-nums[n]>=0) {
            v.push_back(nums[n]);
            f(ans,v,n,target-nums[n],nums);
            v.pop_back();
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