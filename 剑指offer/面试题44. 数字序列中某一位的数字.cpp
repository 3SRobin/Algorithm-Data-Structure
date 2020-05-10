class Solution {
public:
    int findNthDigit(int n) {
      long len=1,start=1,res=9;
      while(n>res*len)
      {
         n-=res*len;
         res*=10;
         len++;
         start*=10;
      }
      start+=(n-1)/len;
      string s=to_string(start);
      return s[(n-1)%len]-'0';
    }
};
