class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=0,p;
        for(auto i:nums) sum+=i;
        if(sum<S||(sum+S)%2) return 0;
        p=(sum+S)/2;
        vector<int> dp(p+1,0);
        dp[0]=1;
        for(auto i:nums)
         for(int j=p;j>=i;j--)
          dp[j]+=dp[j-i];
        return dp[p];
    }
};


