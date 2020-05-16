/*  二分法  */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec(nums.size(),INT_MAX);
        for(auto i:nums)
         *lower_bound(vec.begin(),vec.end(),i)=i;
        return lower_bound(vec.begin(),vec.end(),INT_MAX)-vec.begin();
    }
};

/*  动态规划  */
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int maxs=0;
       vector<int> dp(nums.size(),0);
       for(int i=0;i<nums.size();i++)
       {
          dp[i]=1;
          for(int j=0;j<i;j++)
           if(nums[i]>nums[j])
            dp[i]=max(dp[i],dp[j]+1);
          maxs=max(maxs,dp[i]);
       }
       return maxs;
    }
};


