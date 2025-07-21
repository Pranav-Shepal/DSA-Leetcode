class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        int sr=0,er=m-1;
        int sc=0,ec=n-1;

        vector<int>ans;

        while(sr<=er && sc<=ec){
            // left
            if(sr>er || sc>ec) break;
            for(int i=sc;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
            }
            sr++;

            if(sr>er || sc>ec) break;
            //down
            for(int i=sr;i<=er;i++){
                ans.push_back(matrix[i][ec]);
            }
            ec--;
            
            if(sr>er || sc>ec) break;
            //left
            for(int i=ec;i>=sc;i--){
                ans.push_back(matrix[er][i]);
            }
            er--;

            if(sr>er || sc>ec) break;
            //up 
            for(int i=er;i>=sr;i--){
                ans.push_back(matrix[i][sc]);
            }
            sc++;
        }

        return ans;
    }
};