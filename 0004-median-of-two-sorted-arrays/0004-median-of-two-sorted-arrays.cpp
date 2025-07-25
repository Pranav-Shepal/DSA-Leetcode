class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        vector<int>merg;

        int i=0,j=0;

        for(int i=0;i<m;i++){
            merg.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            merg.push_back(nums2[i]);
        }

        sort(merg.begin(),merg.end());
        for(int i=0;i<m+n;i++)cout<<merg[i]<<" ";

        if((m+n)%2==0){
            return ((merg[(m+n)/2])+(merg[(m+n-1)/2]))/2.00;
        }
        return merg[(m+n)/2];

    }
};