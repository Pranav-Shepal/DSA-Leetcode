class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>&v,int start,vector<int> nums){
        ans.push_back(v);
        for(int i=start;i<nums.size();++i){
            if(i>start && nums[i]==nums[i-1]) continue;

            v.push_back(nums[i]);
            f(ans,v,i+1,nums);     
            v.pop_back();  
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        f(ans,v,0,nums);
        return ans;
    }
};