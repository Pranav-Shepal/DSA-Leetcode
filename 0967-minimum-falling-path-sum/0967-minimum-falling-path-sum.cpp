class Solution {
public:

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();

        int mini=INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,0));

        for(int i=0;i<n;i++)dp[0][i]=matrix[0][i];
        int val1,val2,val3;
        for(int r=1;r<n;r++){
            for(int c=0;c<n;c++){
                val1=matrix[r][c]+dp[r-1][c];

                if(c-1>=0) val2=matrix[r][c]+dp[r-1][c-1];
                else val2=INT_MAX;

                if(c+1<n) val3=matrix[r][c]+dp[r-1][c+1];
                else val3=INT_MAX;

                dp[r][c]=min({val1,val2,val3});
            }
        }

        for(int i=0;i<n;i++) mini=min(mini,dp[n-1][i]);

        return mini;

    }
};