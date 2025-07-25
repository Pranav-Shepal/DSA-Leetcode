class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int mx=INT_MIN;
        set<int>st;
        for(int i=0;i<n;i++){
            if(nums[i]>0)st.insert(nums[i]);
            mx=max(mx,nums[i]);
        }
        for(auto ele:st){
            sum+=ele;
        }
        if(sum<=0)return mx;
        return sum;
    }
};