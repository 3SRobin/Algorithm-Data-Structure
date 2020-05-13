class Solution {
public:
    void sortColors(vector<int>& nums) {
      int left=0,res=0;
      int right=nums.size()-1;
      while(res<=right)
      {
        if(nums[res]==0)
          swap(nums[res++],nums[left++]);
        else if(nums[res]==2)
          swap(nums[res],nums[right--]);
        else res++;
      }
   }
};


