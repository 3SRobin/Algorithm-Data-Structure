class Solution {
public:
	int maximalSquare(vector<vector<char>>& matrix) {
    if(matrix.empty()) return 0;
    int res = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    if(m==0) return 0;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        if (matrix[i-1][j-1] == '0') continue;
        dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]))+1;
        res = max(res, dp[i][j]);
      }
    }
    return res*res;
  }
};


