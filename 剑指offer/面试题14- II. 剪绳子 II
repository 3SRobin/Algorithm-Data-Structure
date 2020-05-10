class Solution {
public:
    int cuttingRope(int n) {
    long sum=1;
    if(n==2) return 1;
    if(n==3) return 2;
    while(n>4)
    {
       sum*=3;
       sum%=(int)(1e9+7);
       n-=3;
    }
   return (sum*n)%(int)(1e9+7);
  }
};


