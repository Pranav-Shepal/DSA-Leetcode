class Solution {
public:

    int f(vector<int>& coins,int n,int amt,vector<vector<int>>& dp){
        
        if(n==0){
            if(amt%coins[0]==0)return 1;
            if(coins[0]==amt || amt==0)return 1;
            return 0;
        }
        if(dp[n][amt]!=-1) return dp[n][amt];
        int notTake=f(coins,n-1,amt,dp);
        int take=0;
        if(coins[n]<=amt) take=f(coins,n,amt-coins[n],dp); // as infinite number of each kind of coin.

        return dp[n][amt]=take+notTake;
    }

    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(coins,n-1,amount,dp);
    }
};