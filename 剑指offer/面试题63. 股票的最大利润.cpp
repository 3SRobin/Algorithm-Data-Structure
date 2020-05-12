class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(prices.empty()) return 0;
      int left=prices[0],maxs=0;
      for(int i=1;i<prices.size();i++)
      {
         if(prices[i]>left) maxs=max(maxs,prices[i]-left);
         if(prices[i]<left) left=prices[i];
      }
      return maxs;
    }
};


