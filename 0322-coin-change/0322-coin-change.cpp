class Solution {
public:

    int f(vector<int>& coins, int amt,int n,vector<vector<int>>& dp){
        if(amt==0)return 0;
        if(n==0){
            if(amt%coins[n]==0) return amt/coins[n];
            return 1e9;
        }
        if(dp[n][amt]!=-1) return dp[n][amt];
        int nottake=f(coins,amt,n-1,dp);
        int take=1e9;
        if(coins[n]<=amt) take=1+f(coins,amt-coins[n],n,dp);

        return dp[n][amt]=min(take,nottake);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();

        vector<vector<int>>dp(n,vector<int>(amount+1,-1));

        int ans=f(coins,amount,n-1,dp);
        return ans==1e9?-1:ans;   
    }
};