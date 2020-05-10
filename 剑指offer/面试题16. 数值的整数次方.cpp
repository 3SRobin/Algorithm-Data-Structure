class Solution {
public:
    double myPow(double x, int n) {
      double r=1,base=x;
      while(n)
      {
         if(n>0&&n%2) r*=base;
         if(n<0&&n%2) r/=base;
         base*=base;
         n/=2;
      }
      return r;
   }
};


