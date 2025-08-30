class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();

        stack<char>st;

        for(int i=0;i<n;i++){
            char ch=num[i];
            while(st.size()>0 && k>0 && st.top()>ch){
                st.pop();
                k--;
            }
            st.push(ch);
        }

        while(k>0){
            st.pop();
            k--;
        }
        string ans="";

        while(st.size()>0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int idx=0;
        while(ans[idx]=='0')idx++;
        cout<<idx;
        ans=ans.substr(idx);
        if(ans=="")return "0";
        return ans;
    }
};