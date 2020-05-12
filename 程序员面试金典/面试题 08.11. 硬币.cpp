class Solution {
public:
    int waysToChange(int n) {
        const int mod=1000000007;
        vector<int> coin={1,5,10,25};
        vector<int> dp(n+1,0);
        dp[0]=1;
        for(int j=0;j<4;j++)
            for(int i=coin[j];i<=n;i++)
               dp[i]=(dp[i]+dp[i-coin[j]])%mod;
        return dp[n];
    }
};


