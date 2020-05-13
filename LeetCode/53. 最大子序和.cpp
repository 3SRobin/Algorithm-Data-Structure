class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int mas=nums[0];
      vector<int> dp(nums.size(),0);
      dp[0]=nums[0];
      for(int i=1;i<nums.size();i++)
      {
         dp[i]=max(dp[i-1]+nums[i],nums[i]);
         mas=max(mas,dp[i]);
      }
      return mas;
    }
};


