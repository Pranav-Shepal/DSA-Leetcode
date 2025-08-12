class Solution {
public:

    void f(vector<vector<int>>& ans,vector<int>& v,vector<bool>& mp,vector<int>nums){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(!mp[i]){
                v.push_back(nums[i]);
                mp[i]=true;
                f(ans,v,mp,nums);
                v.pop_back();
                mp[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<bool>mp(n,false);
        vector<vector<int>>ans;
        vector<int>v;

        f(ans,v,mp,nums);

        return ans;
    }
};