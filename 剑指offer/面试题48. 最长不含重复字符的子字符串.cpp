class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int left=0,right=0,maxlen=0,pos;
      while(right<s.size())
      {
         pos=left;
         while(pos<right&&s[pos]!=s[right]) pos++;
         if(pos==right) maxlen=max(maxlen,right-left+1);
         else left=pos+1;
         right++; 
      }
      return maxlen;
    }
};
