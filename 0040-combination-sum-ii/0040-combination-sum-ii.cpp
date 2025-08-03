class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>&v,int target,int start,vector<int>nums){
        if(target==0){
            ans.push_back(v);
            return;
        }

        for(int i=start;i<nums.size();++i){
            if(i>start && nums[i]==nums[i-1])continue;

            if(nums[i]>target)break;

            v.push_back(nums[i]);
            f(ans,v,target-nums[i],i+1,nums);
            v.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        f(ans,v,target,0,candidates);
        return ans;
    }
};