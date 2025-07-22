class Solution {
public:

    int lowerBound(vector<int>nums, int target){
        int n=nums.size();
        int lo=0;
        int hi=n-1;

        while(lo<=hi){
            int mid=(lo+hi)/2;

            if(nums[mid]==target){
                if(mid==0) return 0;
                if(nums[mid]==nums[mid-1]){
                    hi=mid-1;
                }
                else return mid;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }

        return -1;
    }

    int upperBound(vector<int>nums, int target){
        int n=nums.size();
        int lo=0;
        int hi=n-1;

        while(lo<=hi){
            int mid=(lo+hi)/2;

            if(nums[mid]==target){
                if(mid==n-1)return mid;
                if(nums[mid]==nums[mid+1]){
                    lo=mid+1;
                }
                else return mid;
            }
            else if(nums[mid]<target) lo=mid+1;
            else hi=mid-1;
        }

        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        int loBound=lowerBound(nums,target);
        int upBound=upperBound(nums,target);

        return {loBound,upBound};
    }
};