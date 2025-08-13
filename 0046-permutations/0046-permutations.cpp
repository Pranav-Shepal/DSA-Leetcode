class Solution {
public:

    void f(vector<vector<int>>& ans,int start,vector<int>nums){
        if(start==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            f(ans,start+1,nums);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;

        f(ans,0,nums);

        return ans;
    }
};