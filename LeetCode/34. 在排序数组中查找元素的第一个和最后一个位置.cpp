class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int mid,left=0,right=nums.size()-1;
       while(left<=right)
       {
          mid=(left+right)/2;
          if(target==nums[mid]) break;
          if(target>nums[mid]) left=mid+1;
          if(target<nums[mid]) right=mid-1;
       }
       if(left>right) return {-1,-1};
       left=mid;right=mid;
       while(left>=1&&nums[left-1]==target) left--;
       while(right<nums.size()-1&&nums[right+1]==target) right++;
       return {left,right};
    }
};


