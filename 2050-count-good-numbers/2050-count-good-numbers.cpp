class Solution {
public:
    const int MOD = 1e9 + 7;
     long long pow(long long x,long long n){
        if(n==0)return 1;
        if(n==1)return x % MOD;
        long long ans=pow(x,n/2);

        if(n%2==0){
            return (ans*ans) % MOD;
        }
        return (ans*ans*x) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;  

        long long ev=pow(5,even);
        long long od=pow(4,odd);

        return( ev*od) % MOD;
    }
};