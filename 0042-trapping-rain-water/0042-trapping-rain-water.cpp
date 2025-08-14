class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        vector<int>nge(n);
        vector<int>pge(n);
        nge[n-1]=height[n-1];
        pge[0]=height[0];

        int mxEle=height[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i]=mxEle;
            if(mxEle<height[i])mxEle=height[i];
        }

        mxEle=height[0];
        for(int i=1;i<n;i++){
            pge[i]=mxEle;
            if(mxEle<height[i])mxEle=height[i];
        }

        int ans=0;

        for(int i=1;i<n-1;i++){
            int mn=min(pge[i],nge[i]);
            if(mn>height[i]){
                ans+=mn-height[i];
            }
        }
       
        return ans;
    }
};