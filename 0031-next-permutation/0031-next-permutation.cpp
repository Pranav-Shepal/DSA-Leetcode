class Solution {
public:

    void sort(int idx,int n,vector<int>& nums){
        while(idx<=n){
            swap(nums[idx],nums[n]);
            idx++;
            n--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int n=nums.size();

        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }

        if(idx==-1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=0;i<n;i++)cout<<nums[i]<<" ";

        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        sort(idx+1,n-1,nums);
    }
};