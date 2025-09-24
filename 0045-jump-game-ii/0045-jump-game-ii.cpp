class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jumps=0;
        int end=0;
        int mxIdx=0;

        if(n<=1)return 0;

        for(int i=0;i<n-1;i++){
            mxIdx=max(mxIdx,nums[i]+i);
            if(i==end){
                jumps++;
                end=mxIdx;
            }
        }

        return jumps;
    }
};