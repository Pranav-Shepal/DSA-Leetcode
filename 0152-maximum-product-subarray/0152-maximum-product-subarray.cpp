class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int mxProd=arr[0];
        int mnProd=arr[0];
        int ans=arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]<0){
                swap(mxProd,mnProd);
            }
            mxProd=max(arr[i],mxProd*arr[i]);
            mnProd=min(arr[i],mnProd*arr[i]);
            ans=max(ans,mxProd);
        }

        return ans;
    }
};