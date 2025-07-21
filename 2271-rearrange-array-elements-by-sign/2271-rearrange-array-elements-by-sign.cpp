class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>neg;
        vector<int>pos;
        
        for(int i=0;i<n;i++){
            if(nums[i]<0)neg.push_back(nums[i]);
            else pos.push_back(nums[i]);
        }
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=pos[a++];
            }
            else nums[i]=neg[b++];
        }
        return nums;
    }
};