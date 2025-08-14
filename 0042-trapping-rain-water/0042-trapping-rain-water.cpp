class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prevMax(n);
        vector<int>nextMax(n);
        int maxNum=height[0];
        prevMax[0]=-1;
        for(int i=1;i<n;i++){
            prevMax[i]=maxNum;
            if(maxNum<height[i])maxNum=height[i];
        }

        maxNum=height[n-1];
        nextMax[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            nextMax[i]=maxNum;
            if(maxNum<height[i])maxNum=height[i];
        }
        int units=0;
        for(int i=1;i<=n-2;i++){
            if(min(nextMax[i],prevMax[i])>height[i]){
                units+=min(nextMax[i],prevMax[i])-height[i];
            }
        }

        return units;

    }
};