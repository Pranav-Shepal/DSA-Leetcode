class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                return {mp[nums[i]],i};
            }
            else{
                int rem=target-nums[i];
                mp[rem]=i;
            }
        }
        return {0,0};
    }
};