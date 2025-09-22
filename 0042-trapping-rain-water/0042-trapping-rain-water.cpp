class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int>pge(n,0);
        vector<int>nge(n,0);

        pge[0]=height[0];
        int mxEle=INT_MIN;
        for(int i=1;i<n;i++){
            mxEle=max(pge[i-1],height[i]);
            pge[i]=mxEle;
        }

        nge[n-1]=height[n-1];
        mxEle=INT_MIN;
        for(int i=n-2;i>=0;i--){
            mxEle=max(nge[i+1],height[i]);
            nge[i]=mxEle;
        }

        int units=0;
        for(int i=1;i<n-1;i++){
            int mnEl=min(nge[i],pge[i]);
            if(mnEl>height[i])units+=mnEl-height[i];
        }

        return units;
    }
};