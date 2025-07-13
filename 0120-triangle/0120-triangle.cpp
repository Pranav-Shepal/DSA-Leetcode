class Solution {
public:

    int f(vector<vector<int>>& triangle,int m,int a,int b,vector<vector<int>>& dp){
        if(m==a)return triangle[m][b];

        if(dp[a][b]!=-1) return dp[a][b];
        int bot= f(triangle,m,a+1,b,dp);
        int botRigh=f(triangle,m,a+1,b+1,dp);

        return dp[a][b]=triangle[a][b]+min(bot,botRigh);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));

        return f(triangle,m-1,0,0,dp);
    }
};