class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        dp[0][0]=grid[0][0];
        for(int i=1;i<n;i++)
          dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int i=1;i<m;i++)
          dp[0][i]=dp[0][i-1]+grid[0][i];
        for(int i=1;i<n;i++)
          for(int j=1;j<m;j++) 
            dp[i][j]=max(dp[i][j-1],dp[i-1][j])+grid[i][j];
        return dp[n-1][m-1];
    }
};


