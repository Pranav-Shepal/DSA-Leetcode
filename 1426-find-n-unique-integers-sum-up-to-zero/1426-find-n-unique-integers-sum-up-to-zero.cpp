class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        for(int i=1;i<n;i++)ans.push_back(i);

        int a=((n-1)*n)/2;
        ans.push_back(-a);
        return ans;
    }
};