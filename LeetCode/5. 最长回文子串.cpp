/*  马拉车  */
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return s;
        string sx="#";
        for(auto i:s) sx=sx+i+'#';
        vector<int> vec(sx.size(),0);
        int maxp=0,pos=0,start,len=0;
        for(int i=0;i<sx.size();i++)
        {
            vec[i]=i<maxp?min(maxp-i,vec[2*pos-i]):1;
            while(i+vec[i]<sx.size()&&i-vec[i]>=0&&sx[i-vec[i]]==sx[i+vec[i]])
                vec[i]++;
            if(i+vec[i]>maxp)
            {
                pos=i;
                maxp=i+vec[i];
            }
            if(len<vec[i]-1)
            {
                len=vec[i]-1;
                start=i/2-len/2;
            }
        }
        return s.substr(start,len);
    }
};


/*  中心扩散  */
class Solution {
public:
    string longestPalindrome(string s) {
      int len=0;
      string sc;
      for(int i=0;i<s.size();i++)
      {
         if((len=fun(s,i,i))>sc.size())
         {
            sc.clear();
            for(int j=i-len/2;j<=i+len/2;j++)
              sc.push_back(s[j]);
         }
         if((len=fun(s,i,i+1))>sc.size())
         {
             sc.clear();
             for(int j=i-(len/2-1);j<=i+len/2;j++)
             sc.push_back(s[j]);
         }
      }
      return sc;
    }
    int fun(string &s,int i,int j)
    {
       while(i>=0&&j<s.size()&&s[i]==s[j])
       {
           i--;  j++;
       }
       return j-i-1;
    }
};


