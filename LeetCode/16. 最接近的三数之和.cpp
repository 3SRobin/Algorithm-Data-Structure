class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0,mins=INT_MAX;
        int left,right,ans;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--)
        {
           left=0;
           right=i-1;
           while(left<right)
           {
              ans=nums[left]+nums[right]+nums[i]-target;
              if(abs(ans)<mins)
              {
                 sum=nums[left]+nums[right]+nums[i];
                 mins=abs(ans);
              }
              if(ans>=0) right--;
              if(ans<0) left++;
           }
        }
        return sum;
     }
};


