class Solution {
public:
    string decodeString(string s) {
       int pos=0;
       return XF(s,pos);
    }
    string XF(string& s,int& pos)
    {
       int num=0;
       string res;
       for(;pos<s.size();pos++)
       {
          if(isdigit(s[pos])) num=num*10+s[pos]-'0';
          if(isalpha(s[pos])) res+=s[pos];
          if(s[pos]==']') return res;
          if(s[pos]=='[')
          {
             pos++;
             string ans=XF(s,pos);
             for(int j=0;j<num;j++)
               res+=ans;
             num=0;
          }
       }
       return res;
    }
};


