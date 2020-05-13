class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return {};
        vector<vector<int>> vec;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1]) continue;
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]==0)
                {
                    vec.push_back({nums[i],nums[l],nums[r]});
                    while(l<r&&nums[l]==nums[l+1]) l++;
                    while(l<r&&nums[r]==nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0) l++;
                else if(nums[i]+nums[l]+nums[r]>0) r--;
            }
        }
        return vec;
    }
};


