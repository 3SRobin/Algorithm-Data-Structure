class Solution {
public:
    int singleNumber(vector<int>& nums) {
      if(nums.empty()) return 0;
      if(nums.size()<3) return nums[0];
      int left=0,right=2;
      sort(nums.begin(),nums.end());
      while(right<nums.size())
      {
         if(nums[left]!=nums[right]) break;
         left+=3;
         right+=3;
      }
      return nums[left];
   }
};


