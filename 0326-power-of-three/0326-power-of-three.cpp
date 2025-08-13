class Solution {
public:

    bool f(int n){
        if(n<1)return false;
        if(n==1)return true;
        if(n%3!=0)  return false;
        return f(n/3);
    }

    bool isPowerOfThree(int n) {
        if(n<1)return false;
       return f(n);
    }
};