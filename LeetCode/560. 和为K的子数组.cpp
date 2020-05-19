class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int res=0,sum=0;
       map<int,int> mp;
       mp[0]=1;
       for(auto i:nums)
       {
          sum+=i;
          res+=mp.find(sum-k)==mp.end()?0:mp[sum-k];
          mp[sum]++;
       }
       return res;
    }
};


