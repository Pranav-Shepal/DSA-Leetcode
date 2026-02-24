class Solution {
public:
    void subs(vector<int>& nums,vector<vector<int>> &ans,vector<int>v,int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        subs(nums,ans,v,i+1);
        v.push_back(nums[i]);
        subs(nums,ans,v,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;

        subs(nums,ans,v,0);

        return ans;
    }
};