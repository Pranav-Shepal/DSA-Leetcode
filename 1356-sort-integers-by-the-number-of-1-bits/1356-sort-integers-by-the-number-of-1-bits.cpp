class Solution {
public:

    int cntOnes(int n){
        int cnt=0;
        while(n>0){
            if(n & 1){
                cnt++;
            }
            n>>=1;
        }
        return cnt;
    }

    static bool cmp(const pair<int,int>a,const pair<int,int>b){
        if(a.second==b.second)return a.first<b.first;
        return a.second<b.second;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>>v(n);

        for(int i=0;i<n;i++){
            int cnt=cntOnes(arr[i]);
            v[i].first=arr[i];
            v[i].second=cnt;
        }

        sort(v.begin(),v.end(),cmp);
        for(auto e:v){
            cout<<e.first<<" "<<e.second<<endl;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=v[i].first;
        }

        return ans;

    }
};