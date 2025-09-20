class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>pre(n);

        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k)cnt++;
            int rem=pre[i]-k;
            if(mp.find(rem)!=mp.end()){
                cnt+=mp[rem];
            }
            mp[pre[i]]++;
        }

        return cnt;
    }
};