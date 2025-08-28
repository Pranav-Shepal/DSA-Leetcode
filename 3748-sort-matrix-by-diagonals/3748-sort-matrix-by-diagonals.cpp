class Solution {
public:

    void reverse(vector<int>& v){
        int n=v.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            swap(v[i],v[j]);
        }
    }

    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>ans(n,vector<int>(n));

        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(grid[i][j]);
            }
        }

        for(auto ele:mp){
            vector<int>v=ele.second;
            sort(v.begin(),v.end());
            if(ele.first>=0) reverse(v);
            mp[ele.first]=v;
        }

        for(auto ele:mp){
            int val=ele.first;
            vector<int>v=ele.second;
            
            if(val<=0){
                int row=0;
                int col=-ele.first;
                int i=0;
                while(col<n){
                    cout<<v[i]<<" ";
                    ans[row][col]=v[i];
                    row++;col++;i++;
                }
            }
            else{
                int col=0;
                int row=ele.first;
                int i=0;
                while(row<n){
                    ans[row][col]=v[i];
                    row++;col++;i++;
                }
            }
        }
        return ans;

    }
};