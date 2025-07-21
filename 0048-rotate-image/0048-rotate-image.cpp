class Solution {
public:

    vector<int> rev(vector<int>v){
        int n=v.size();
        for(int i=0,j=n-1;i<=j;i++,j--){
            swap(v[i],v[j]);
        }

        return v;
    }

    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>trr(n,vector<int>(n,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                trr[i][j]=matrix[j][i];
            }
        }for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<trr[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<n;i++){
            vector<int> v=trr[i];
            matrix[i]=rev(v);
        }

    }
};