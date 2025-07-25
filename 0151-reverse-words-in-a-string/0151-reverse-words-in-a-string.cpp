class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        vector<string> v;
        while(ss>>temp){
            v.push_back(temp);
        } 
        int n=v.size();
        string ans=v[n-1];
        for(int i=n-2;i>=0;i--){
            ans+=(" "+v[i]);
        }
        return ans;
    }
};