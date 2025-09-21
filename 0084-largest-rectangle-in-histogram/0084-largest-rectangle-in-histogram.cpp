class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int>nsi(n);
        vector<int>psi(n);

        stack<int>st;

        nsi[n-1]=n;
        st.push(n-1);

        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i])st.pop();

            if(st.size()==0) nsi[i]=n;
            else nsi[i]=st.top();

            st.push(i);
        }
        while(st.size()>0)st.pop();

        psi[0]=-1;
        st.push(0);

        for(int i=1;i<n;i++){
            while(st.size()>0 && heights[st.top()]>=heights[i])st.pop();

            if(st.size()==0)psi[i]=-1;
            else psi[i]=st.top();

            st.push(i);
        }
        
        int mxArea=INT_MIN;

        for(int i=0;i<n;i++){
            int width=nsi[i]-psi[i]-1;
            int area=width*heights[i];
            mxArea=max(mxArea,area);
        }

        return mxArea;
    }
};