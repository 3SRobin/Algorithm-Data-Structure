class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<vector<int>> vec;
        res.push_back({});
        for(auto i:nums)
        {
            vec=res;
            for(auto j:vec)
            {
                j.push_back(i);
                res.push_back(j);
            }
        }
        return res;
    }
};


