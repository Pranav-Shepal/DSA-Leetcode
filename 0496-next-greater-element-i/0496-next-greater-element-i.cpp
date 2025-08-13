class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans(n1);

        vector<int>nge(n2);
        stack<int>st;
        nge[n2-1]=-1;
        st.push(nums2[n2-1]);

        for(int i=n2-2;i>=0;i--){
            while(st.size()>0 && st.top()<nums2[i])st.pop();

            if(st.size()==0)nge[i]=-1;
            else nge[i]=st.top();
            st.push(nums2[i]);
        }

        unordered_map<int,int>mp;
        for(int i=0;i<n2;i++){
            mp[nums2[i]]=nge[i];
        }
        for(int i=0;i<n1;i++){
            ans[i]=mp[nums1[i]];
        }

        return ans;
    }
};