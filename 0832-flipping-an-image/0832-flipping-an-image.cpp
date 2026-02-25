class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        int n=image.size();

        for(int i=0;i<n;i++){
            vector<int> v=image[i];
            reverse(v.begin(),v.end());
            ans.push_back(v);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]==0) ans[i][j]=1;
                else ans[i][j]=0;
            }
        }

        return ans;
    }
};