class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0)return 0;

        int sum=1;
        int mxSum=INT_MIN;

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1])continue;
            if(nums[i+1]==nums[i]+1){
                sum++;
            }
            else sum=1;
            mxSum=max(sum,mxSum);
        }
        return mxSum!=INT_MIN?mxSum:1;
    }
};