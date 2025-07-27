class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();

        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)mp[s[i]]++;

        priority_queue<pair<int,char>>pq;

        for(auto ele:mp){
            pq.push({ele.second,ele.first});
        }

        string ans="";
        while(pq.size()>0){
            auto ele=pq.top();
            pq.pop();
            int f=ele.first;
            while(f--){
                ans+=ele.second;
            }
        }

        return ans;

    }
};