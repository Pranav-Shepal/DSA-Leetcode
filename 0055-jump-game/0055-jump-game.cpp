class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int mxIdx=0; // max index upto which we can reach

        for(int i=0;i<n;i++){
            if(i>mxIdx)return false;
            mxIdx=max(mxIdx,nums[i]+i);
        }
        return true;
    }
};