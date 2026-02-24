class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;

        while(i<n){
            int currIdx=nums[i];
            if(currIdx==i+1 || nums[i]==nums[currIdx]) i++;
            else swap(nums[i],nums[currIdx]);
        }

        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)return nums[i];
        }
        return 0;
    }
};