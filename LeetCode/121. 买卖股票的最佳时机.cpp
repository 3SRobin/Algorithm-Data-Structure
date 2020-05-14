class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(prices.empty()) return 0;
      int mins=prices[0];
      int maxs=0;
      for(int i=1;i<prices.size();i++)
      {
         maxs=max(maxs,prices[i]-mins);
         if(prices[i]<mins) mins=prices[i];
      }
      return maxs;
   }
};


