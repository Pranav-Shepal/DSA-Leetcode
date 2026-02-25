class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=-1;
        int mxArea=-1;
        int l=0;
        int r=n-1;

        while(l<r){
            int len=r-l;
            int brd=min(height[l],height[r]);
            area=len*brd;
            mxArea=max(area,mxArea);
            if(height[l]<height[r])l++;
            else r--;
        }

        return mxArea;
    }
};