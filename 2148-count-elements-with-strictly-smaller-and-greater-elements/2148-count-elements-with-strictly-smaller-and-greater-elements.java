class Solution {
    public int countElements(int[] nums) {
        int n=nums.length;

        int sm=Integer.MAX_VALUE;
        int gr=Integer.MIN_VALUE;
        int cnt=0;

        for(int i=0;i<n;i++){
            sm=Math.min(nums[i],sm);
            gr=Math.max(nums[i],gr);
        }

        for(int i=0;i<n;i++){
            if(nums[i]<gr && nums[i]>sm)cnt++;
        }

        return cnt;
    }
}