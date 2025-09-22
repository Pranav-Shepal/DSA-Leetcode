class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[nums[i]]++;

        int mxFreq=0;
        for(auto e:mp){
            mxFreq=max(mxFreq,e.second);
        }

        int cnt=0;
        for(auto e:mp){
            if(mxFreq==e.second)cnt+=e.second;
        }
        return cnt;
    }
};