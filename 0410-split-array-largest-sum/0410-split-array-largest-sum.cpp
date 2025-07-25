class Solution {
public:

    bool Check(vector<int>& nums, int k,int minSum){
        int n=nums.size();

        int cnt=1;
        int currSum=0;
        for(int i=0;i<n;i++){
            if(minSum<nums[i]){
                return false;
            }
            if(currSum+nums[i]>minSum){
                cnt++;
                currSum=nums[i];
            }
            else currSum+=nums[i];
        }

        return cnt<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int lo;
        int sum=0;
        for(int i=0;i<n;i++){
            lo=max(lo,nums[i]);
            sum+=nums[i];
        }
        int hi=sum;

        while(lo<=hi){
            int minSum=(lo+hi)/2;
            bool check=Check(nums,k,minSum);
            if(check){
                hi=minSum-1;
            }
            else lo=minSum+1;
        }
        return lo;
    }
};