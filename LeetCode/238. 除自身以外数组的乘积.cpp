class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sum1(nums.size(),1);
        vector<int> sum2(nums.size(),1);
        vector<int> sum3(nums.size(),0);
        sum1[0]=nums[0];
        sum2[nums.size()-1]=nums.back();
        for(int i=1;i<nums.size();i++)
          sum1[i]=sum1[i-1]*nums[i];
        for(int i=nums.size()-2;i>=0;i--)
          sum2[i]=sum2[i+1]*nums[i];
        for(int i=1;i<nums.size()-1;i++)
          sum3[i]=sum1[i-1]*sum2[i+1];
        sum3[0]=sum2[1];
        sum3[nums.size()-1]=sum1[nums.size()-2];
        return sum3;
    }
};


