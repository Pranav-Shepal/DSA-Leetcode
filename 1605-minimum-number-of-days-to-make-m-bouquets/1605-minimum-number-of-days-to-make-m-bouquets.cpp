class Solution {
public:

    bool Check(vector<int>arr, int m, int k,int day){
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(day>=arr[i])arr[i]=0;
        }

        int cnt=k;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(cnt!=0)cnt--;
            }
            else cnt=k;
            if(cnt==0){
                m--;
                cnt=k;
            }
        }
        if(m<=0)return true;
        return false;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();

       
        if((m)>n/k) return -1;

        int lo,hi;
        for(int i=0;i<n;i++){
            lo=min(lo,arr[i]);
            hi=max(hi,arr[i]);
        }

        while(lo<=hi){
            int day=(lo+hi)/2;
            bool check=Check(arr,m,k,day);
            if(check){
                hi=day-1;
            }
            else lo=day+1;
        }

        return lo;
    }
};