class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> vec;
       pair<int,int> A[nums.size()];
       int sum=1,len=0;
       if(nums.size()==1) return nums;
       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++)
       {
          if(nums[i]==nums[i-1])
          sum++;
          if(i==nums.size()-1||nums[i]!=nums[i-1])
          {
             if(i==nums.size()-1&&nums[i]!=nums[i-1])
             {
                 A[len].first=1;
                 A[len].second=nums[i];
                 len++;
             }
             A[len].first=sum;
             A[len].second=nums[i-1];
             sum=1;
             len++;
          }
       }
       sort(A,A+len);
       for(int i=len-1;i>=len-k;i--)
         vec.push_back(A[i].second);
       return vec;
    }
};


