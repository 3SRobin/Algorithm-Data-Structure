class Solution {
public:
   int reverse(int x){
    int max=0x7fffffff;
    long b=0;
    while(x) {
        b=b*10+x%10;
        x=x/10;
    }
    return(b>max||b<(-1*(max+1)))?0:b;
   }
};


