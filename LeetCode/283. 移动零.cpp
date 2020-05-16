class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int pos=0;
      while(pos<nums.size())
      {
         if(pos<nums.size()-1&&nums[pos]==0)
         {
            int i=pos+1;
            while(i<nums.size()&&nums[i]==0) i++;
            if(i==nums.size()) i--;
            swap(nums[i],nums[pos]);
         }
         pos++;
      }
   }
};


