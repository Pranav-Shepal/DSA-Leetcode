class Solution {
public:

    int f(vector<int>& nums,int n,int k,vector<vector<int>>& dp){
        if(n==0){
            if(k==0 && nums[0]==0) return 2;
            if(k==0 || k==nums[0]) return 1;
            return 0;
        }   
        if(dp[n][k]!=-1) return dp[n][k];
        int notTake=f(nums,n-1,k,dp);
        int take=0;
        if(nums[n]<=k) take=f(nums,n-1,k-nums[n],dp);

        return dp[n][k]=notTake+take;
    }
  

    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++) totalSum+=nums[i];

        int k=(totalSum-target)/2;
        if(totalSum-target<0 || (totalSum-target)%2)return false;

        vector<vector<int>>dp(n,vector<int>(k+1,-1));

        return f(nums,n-1,k,dp);
    }
};