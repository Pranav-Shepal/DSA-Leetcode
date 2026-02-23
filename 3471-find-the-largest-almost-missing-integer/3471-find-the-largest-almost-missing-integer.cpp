class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1){
            int a=-1;
            map<int,int>mp;
            for(int e:nums)mp[e]++;

            for(auto ele:mp){
                if(mp[ele.first]==1){
                    a=max(a,ele.first);
                }
            }
            return a;
        }
        if(k==n){
            int mx=0;
            for(int i:nums)mx=max(i,mx);

            return mx;
        }

        int ans=-1;
        int fstFreq=0;
        int lstFreq=0;
        for(int x:nums){
            if(x==nums[0])fstFreq++;
            if(x==nums[n-1])lstFreq++;
        }

        if(fstFreq==1) ans=max(ans,nums[0]);
        if(lstFreq==1) ans=max(ans,nums[n-1]);
        
        return ans;
    }
};