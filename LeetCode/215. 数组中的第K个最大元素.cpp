class Solution {
public:
    int pos,res;
    int findKthLargest(vector<int>& nums, int k) {
      pos=k;
      QuickSort(nums,0,nums.size()-1);
      return res;
    }
    void QuickSort(vector<int>& nums,int s,int t)
    {
      if(s>t) return;
      int i=fun(nums,s,t);
      if(i==nums.size()-pos) res=nums[i];
      if(nums.size()-pos<i)QuickSort(nums,s,i-1);
      else QuickSort(nums,i+1,t);
    }
    int fun(vector<int>& nums,int s,int t)
    {
       int temp=nums[s];
       int i=s,j=t;
       while(i<j)
       {
          while(i<j&&temp<=nums[j]) j--;
          nums[i]=nums[j];
          while(i<j&&temp>=nums[i]) i++;
          nums[j]=nums[i];
       }
       nums[i]=temp;
       return i;
    }
};


