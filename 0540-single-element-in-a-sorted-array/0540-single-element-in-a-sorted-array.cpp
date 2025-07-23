class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        int lo=0;
        int hi=n-1;

        while(lo<hi){
            int mid=(lo+hi)/2;
            if(mid==0 && nums[0]!=nums[1]) return nums[mid];
            if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[n-1];
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];
            else if(mid%2==0){ // even
                if(nums[mid]==nums[mid+1]) lo=mid+1;
                else hi=mid-1;
            }
            else{
                if(nums[mid]==nums[mid-1]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return nums[lo];
    }
};