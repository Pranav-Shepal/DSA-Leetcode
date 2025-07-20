class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int mxCnt=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==1)cnt++;
            else{
                mxCnt=max(mxCnt,cnt);
                cnt=0;
            }
        }
        mxCnt=max(mxCnt,cnt);
        return mxCnt;
    }
};