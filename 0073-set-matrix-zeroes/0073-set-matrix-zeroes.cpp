class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of cols

        unordered_set<int> rows;
        unordered_set<int> cols;

        // 1) Record rows and columns that must become zero
        for (int i = 0; i < n; i++) {      // loop rows
            for (int j = 0; j < m; j++) {  // loop cols
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        // 2) Zero recorded rows
        for (int r : rows) {
            for (int j = 0; j < m; j++) matrix[r][j] = 0;
        }

        // 3) Zero recorded columns
        for (int c : cols) {
            for (int i = 0; i < n; i++) matrix[i][c] = 0;
        }
    }
};
