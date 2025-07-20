class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrice=prices[0];
        int mxProf=0;

        for(int i=1;i<n;i++){
            int cost=prices[i]-minPrice;
            mxProf=max(mxProf,cost);
            minPrice=min(minPrice,prices[i]);
        }

        return mxProf;
    }
};