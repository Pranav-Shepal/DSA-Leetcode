class Solution {
public:

    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();

        sort(intervals.begin(),intervals.end(),cmp);

        vector<vector<int>>ans;
        ans.push_back(intervals[0]);

        for(int i=1;i<n;i++){
            auto v=ans[ans.size()-1];
            if(v[1]>=intervals[i][0]){
                if(v[1]<intervals[i][1]) v[1]=intervals[i][1];
                ans[ans.size()-1]=v;
            }
            else ans.push_back(intervals[i]);
        }

        return ans;
    }
};