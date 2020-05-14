class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxsum=nums[0],a=1;
       for(auto i:nums)
       {
          a*=i;
          if(a>maxsum) maxsum=a;
          if(i==0) a=1;
       }
       a=1;
       for(int i=nums.size()-1;i>=0;i--)
       {
          a*=nums[i];
          if(a>maxsum) maxsum=a;
          if(nums[i]==0) a=1;
       } 
       return maxsum;
    }
};


