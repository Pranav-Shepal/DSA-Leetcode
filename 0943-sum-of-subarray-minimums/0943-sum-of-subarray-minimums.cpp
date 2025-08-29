class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();

        stack<int>st;
        vector<int>nse(n);
        vector<int>pse(n);

        nse[n-1]=n;
        pse[0]=-1;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]>=arr[i])st.pop();
            if(st.size()==0)nse[i]=n;
            else nse[i]=st.top();

            st.push(i);
        }

        while(st.size()>0)st.pop();
        st.push(0);

        for(int i=1;i<n;i++){
            while(st.size()>0 && arr[st.top()]>arr[i])st.pop();
            if(st.size()==0)pse[i]=-1;
            else pse[i]=st.top();

            st.push(i);
        }
        for(int e:nse)cout<<e<<" ";
        cout<<endl;
        for(int e:pse)cout<<e<<" ";
        long long mod=1e9+7;
        long long ans=0;
        for(int i=0;i<n;i++){
            long long l=i-pse[i];
            long long r=nse[i]-i;
            ans = (ans + (l * r % mod) * arr[i] % mod) % mod;
        }
        return ans;
    }
};