class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>pre(n);
        pre[0]=nums[0];

        for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];

        unordered_map<int,int>mp;

        int cnt=0;
        for(int i=0;i<n;i++){
            int num=pre[i];
            if(num==k)cnt++;
            int rem=num-k;
            if(mp.find(rem)!=mp.end()){
                cnt+=mp[rem];
            }
            mp[num]++;
        }

        return cnt;
    }
};