class Solution {
public:

    bool Cheak(vector<int>& nums, int threshold,int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)nums[i]/(double)div);
        }

        if(sum<=threshold)return true;
        return false;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();

       int lo=1;
       int hi;
       for(int i=0;i<n;i++){
        hi=max(hi,nums[i]);
       } 

        while(lo<=hi){
            int div=(lo+hi)/2;
            bool cheak=Cheak(nums,threshold,div);
            if(cheak){
                hi=div-1;
            }
            else{
                lo=div+1;
            }
        }

        return lo;  
    }
};