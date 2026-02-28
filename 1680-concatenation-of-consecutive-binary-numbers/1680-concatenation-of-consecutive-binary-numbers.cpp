class Solution {
    const int MOD = 1e9 + 7;
    public:

    string decToBin(int n){
        string bin="";

        while(n>0){
            int bit=n%2;
            bin+=('0'+bit);
            n/=2;
        }

        reverse(bin.begin(),bin.end());

        return bin;
    }

    int concatenatedBinary(int n) {
        
        string str="";
        for(int i=1;i<=n;i++){
            str+=decToBin(i);
        }
        
        int ans=0;
        int base=1;
        for(int i=str.length()-1;i>=0;i--){
            int bit=str[i]-48;
            ans+=(bit*base);
            ans=ans%MOD;
            base*=2;
            base=base%MOD;
        }
        return ans;


    }
};