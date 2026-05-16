class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
            while(n%4==0)
            {
                n=n/4;
            }                        //agar power hoga to last me n==1 hoga..
        return n==1;
    }
};