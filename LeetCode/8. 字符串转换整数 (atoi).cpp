class Solution {
public:
    int myAtoi(string str) {
       long num=0;
       int flag=1,pos=0;
       while(pos<str.size()&&str[pos]==' ') pos++;
       if(str[pos]=='-')
       {
          flag=-1;
          pos++;
          if(str[pos]=='+') return 0;
       }
       if(str[pos]=='+') pos++;
       while(pos<str.size()&&isdigit(str[pos]))
       {
          num=num*10+(str[pos++]-'0');
          if(num>INT_MAX) return flag==1?INT_MAX:INT_MIN;
       }
       return flag==1?num:-num;
   }
};


