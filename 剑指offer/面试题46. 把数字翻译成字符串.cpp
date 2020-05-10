class Solution {
public:
    int translateNum(int num) {
      string s=to_string(num);
      vector<int> dp(s.size()+1,1);
      for(int i=2;i<=s.size();i++)
      {
         if(s[i-2]=='1'||(s[i-2]=='2'&&s[i-1]<'6'))
           dp[i]=dp[i-1]+dp[i-2];
         else dp[i]=dp[i-1]; 
      }
      return dp.back();
    }
};
