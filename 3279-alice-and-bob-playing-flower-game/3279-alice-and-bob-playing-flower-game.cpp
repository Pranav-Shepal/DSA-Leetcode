class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        
        int odd_X=n/2;
        int even_X=n/2;
        int odd_Y=m/2;
        int even_Y=m/2;
        if(n%2!=0)odd_X++;
        if(m%2!=0)odd_Y++;
        ans=(long long )odd_X*even_Y +(long long) even_X*odd_Y ;
        return ans;
    }
};