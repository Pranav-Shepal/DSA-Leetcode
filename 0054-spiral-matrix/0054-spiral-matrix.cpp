class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;

        int rs = 0, cs = 0, re = n - 1, ce = m - 1;

        while(rs<=re && cs<=ce){
            // right
            for(int i=cs;i<=ce;i++){
                ans.push_back(matrix[rs][i]);
            }
            rs++;

            if(rs>re || cs>ce) break;
            // down
            for(int i=rs;i<=re;i++){
                ans.push_back(matrix[i][ce]);
            }
            ce--;
            
            if(rs>re || cs>ce) break;
            // left
            for(int i=ce;i>=cs;i--){
                ans.push_back(matrix[re][i]);
            }
            re--;

            if(rs>re || cs>ce) break;
            // up
            for(int i=re;i>=rs;i--){
                ans.push_back(matrix[i][cs]);
            }
            cs++;
        }

        return ans;
    }
};