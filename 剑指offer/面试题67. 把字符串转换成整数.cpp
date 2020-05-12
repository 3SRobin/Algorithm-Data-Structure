class Solution {
public:
    int strToInt(string str) {
        long num=0;
        int pos=0,flag=1;
        while(pos<str.size()&&str[pos]==' ') pos++;
        if(str[pos]=='-') 
        {
           pos++;
           flag=-1;
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


