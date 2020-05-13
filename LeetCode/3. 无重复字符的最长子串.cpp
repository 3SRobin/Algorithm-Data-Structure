class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0,right=0,maxlen=0;
       while(right<s.size())
       {
          int pos=left;
          while(pos<right&&s[pos]!=s[right]) pos++;
          if(pos!=right) left=pos+1;
          maxlen=max(maxlen,right-left+1); 
          right++;
       }
       return maxlen;
    }
};


