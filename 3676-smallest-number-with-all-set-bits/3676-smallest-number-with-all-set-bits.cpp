class Solution {
public:
    int smallestNumber(int n) {
        
        if(n==1)return 1;
        int x=1;
        while(x<=n){
            x=x*2;
        }
        return x-1;
    }
};