class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int i=0;
        int cnt=0;
        while(k>0 && i<n){
            if(cnt+1!=arr[i]){
                while(k>0 && cnt+1!=arr[i]){
                    cnt++;
                    k--;
                }
            }
            if(k>0)cnt=arr[i];
            i++;
        }
        return cnt+k;

    }
};