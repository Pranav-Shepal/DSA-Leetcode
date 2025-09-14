class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int mxArea=INT_MIN;
        int area=0;

        int l=0;
        int r=n-1;
        while(l<r){
            area=(r-l)*min(height[l],height[r]);
            mxArea=max(mxArea,area);

            if(height[l]<=height[r]) l++;
            else r--;
        }
        return mxArea;
    }
};