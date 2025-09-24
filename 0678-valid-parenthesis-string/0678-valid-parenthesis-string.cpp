class Solution {
public:

    bool f(string s,int idx,int cnt,int n,vector<vector<int>>& dp){
        if(cnt<0)return false;
        if(idx==n) return cnt==0;
        if(dp[idx][cnt]!=-1)return dp[idx][cnt];
        
        bool ans=false;
        if(s[idx]=='(') return ans=f(s,idx+1,cnt+1,n,dp);
        if(s[idx]==')') return ans=f(s,idx+1,cnt-1,n,dp);
        else ans=f(s,idx+1,cnt+1,n,dp) || f(s,idx+1,cnt-1,n,dp) || f(s,idx+1,cnt,n,dp);
        return dp[idx][cnt]= ans;
    }

    bool checkValidString(string s) {
        int n=s.length();
        int cnt=0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(s,0,0,n,dp);
    }
};