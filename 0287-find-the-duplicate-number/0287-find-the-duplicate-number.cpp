class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<bool> flag(n+1,false);
        for(int i=0;i<nums.size();i++){
            int e=nums[i];
            if(flag[e]==true)return e;
            flag[e]=true;
        }
        return 0;
    }
};