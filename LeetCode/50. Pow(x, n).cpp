class Solution {
public:
    double myPow(double x, int n) {
        double base = x, r = 1;
        while (n)
        {
            if (n % 2 && n < 0) r /= base;
            if (n % 2 && n > 0) r *= base;
            n /= 2;
            base *= base;
        }
        return r;
    }
};


