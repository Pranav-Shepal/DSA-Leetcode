class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        // transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

    
        for(int i=0;i<n;i++){
            auto v=matrix[i];
            reverse(v.begin(),v.end());
            matrix[i]=v;
        }
    }
};