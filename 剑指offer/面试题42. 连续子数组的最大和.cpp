class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        int sum=dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            sum=max(sum,dp[i]);
        }
        return sum;
     }
}; 
