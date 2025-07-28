class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>num(nums.begin(),nums.end());
        for(int i=0;i<n;i++) num.push_back(nums[i]);
        n=n+n;
        vector<int>ans(n);
        stack<int>st;
        st.push(num[n-1]);
        ans[n-1]=-1;

        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()<=num[i])st.pop();
            if(st.size()==0)ans[i]=-1;
            else ans[i]=st.top();
            st.push(num[i]);
        }
        vector<int>v(n/2);
        for(int i=0;i<n/2;i++)v[i]=ans[i];
        return v;
    }
};