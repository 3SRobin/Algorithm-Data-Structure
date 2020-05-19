class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int> vec=nums;
       int size=nums.size();
       int X=0,Y=0;
       sort(vec.begin(),vec.end());
       for(int i=0;i<size;i++)
         if(nums[i]==vec[i]) X++;
         else break;
       if(X!=size)
       {
          for(int i=size-1;i>=0;i--)
          if(nums[i]==vec[i]) Y++;
          else break;
       }
       return size-X-Y;
    }
};


