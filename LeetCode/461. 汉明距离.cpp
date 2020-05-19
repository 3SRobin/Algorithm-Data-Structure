class Solution {
public:
    int hammingDistance(int x, int y) {
       int ans=0;
       int a,b;
       while(x!=0||y!=0)
       {
          if(x==0&&y!=0)
          {
             a=0;
             b=y%2;
             y/=2;
             if(a!=b) ans++;
          }
          if(y==0&&x!=0)
          {
             b=0;
             a=x%2;
             x/=2;
             if(a!=b) ans++;
          }
          if(x!=0&&y!=0)
          {
             a=x%2;
             b=y%2;
             x/=2;
             y/=2;
             if(a!=b) ans++;
          }
       }
       return ans;
    }
};


