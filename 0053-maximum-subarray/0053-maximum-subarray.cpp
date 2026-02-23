class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();

        int mx=nums[0];
        int fmx=nums[0];
        for(int i=1;i<n;i++){
            mx=max(nums[i],nums[i]+mx);
            fmx=max(fmx,mx);
        }
        return fmx;
    }
};