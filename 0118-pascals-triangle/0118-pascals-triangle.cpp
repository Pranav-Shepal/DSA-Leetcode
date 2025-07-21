class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        
        vector<vector<int>>ans;
        if(n>=1)ans.push_back({1});
        if(n>=2)ans.push_back({1,1});
        
        for(int i=2;i<n;i++){
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++){
                v[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(v);
        }

        return ans;
    }
};