class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int res=0;
       for(int fast=0;fast!=res||fast==0;)
       {
          res=nums[res];
          fast=nums[nums[fast]];
       }
       for(int i=0;i!=res;i=nums[i])
         res=nums[res];
       return res;
    }
};


