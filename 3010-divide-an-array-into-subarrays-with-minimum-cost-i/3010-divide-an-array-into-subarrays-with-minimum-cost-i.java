class Solution {
    public int minimumCost(int[] nums) {
        int n=nums.length;

    

        int fr=Integer.MAX_VALUE;
        int sc=Integer.MAX_VALUE;
        int idx=-1;

        for(int i=1;i<n;i++){
            if(fr>nums[i]){
                fr=nums[i];
                idx=i;
            }
        }
        for(int i=1;i<n;i++){
            if(i!=idx && sc>nums[i])sc=nums[i];
        }

        return nums[0]+fr+sc;
    }
}