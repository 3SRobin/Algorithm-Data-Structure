class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> v;
       vector<vector<int>> ve; 
       vector<vector<int>> vec;
       vec.push_back(v);
       for(int i=0;i<nums.size();i++)
       {
          ve=vec;
          for(int j=0;j<ve.size();j++)
            ve[j].push_back(nums[i]);
          for(int j=0;j<ve.size();j++)
            vec.push_back(ve[j]);
       }
       return vec;
    }
};


