class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();

        vector<vector<int>>dp(n,vector<int>(n,-1));

        for(int i=0;i<n;i++) dp[0][i]=grid[0][i];

        for(int r=1;r<n;r++){
            for(int col=0;col<n;col++){
                int mini=INT_MAX;
                for(int j=0;j<n;j++){
                    if(j==col)continue;
                    mini=min(mini,dp[r-1][j]);
                }
                dp[r][col]=grid[r][col]+mini;
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++) mini=min(mini,dp[n-1][i]);

        return mini;
    }
};