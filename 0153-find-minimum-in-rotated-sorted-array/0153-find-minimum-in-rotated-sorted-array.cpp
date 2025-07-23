class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
        int lo=0;
        int hi=n-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1; // arr sorted towards left (mid->hi)
            else hi=mid; // arr sorted towards left lo->mid mid can be the min.. hence hi=mid
        }
        return nums[lo];
    }
};