class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();

        priority_queue<pair<double, vector<int>>> pq;

        for(auto v:classes){
            double gain = (double(v[0] + 1) / double(v[1] + 1)) - (double(v[0]) / double(v[1]));
            pq.push({gain,v});
        }

        while(extraStudents>0 && pq.size()>0){
            auto ele=pq.top();
            pq.pop();
            vector<int>v=ele.second;
            v[0]=v[0]+1;
            v[1]=v[1]+1;
            double gain = (double(v[0] + 1) / double(v[1] + 1)) - (double(v[0]) / double(v[1]));
            pq.push({gain,v});
            extraStudents--;
        }
        
        double ans=0;
        while(pq.size()>0){
            auto ele=pq.top();
            auto v=ele.second;
            ans+=(double)v[0]/v[1];
            pq.pop();
        }
        return ans/n;
    }
};