class Solution {
public:
    int countDigitOne(int n) {
        int one=0;
        for(long i=1;i<=n;i*=10)
        {
            long a=n/i,b=n%i;
            one+=(a+8)/10*i;
            if(a%10==1) one+=b+1;
        }
        return one;
    }
};
