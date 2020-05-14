class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int res=INT_MIN;
        vector<int> dp(n,1);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
          for(int j=0;j<i;j++)
          {
             if(nums[i]-1==nums[j])
               dp[i]=max(dp[i],dp[j]+1);
             res=max(dp[i],res);
          }
        return res;
     }
};


