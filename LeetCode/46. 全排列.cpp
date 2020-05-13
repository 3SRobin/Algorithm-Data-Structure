class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.empty()) return res;
        vector<vector<int>> vec;
        res.push_back({nums[0]});
        for(int i=1;i<nums.size();i++)
        {
            vec=res;
            res.clear();
            for(auto op:vec)
                Insert(op,nums[i]);
        }
        return res;
    }
    void Insert(vector<int> v,int num)
    {
        vector<int>::iterator ite;
        for(int i=0;i<=v.size();i++)
        {
            vector<int> s(v.begin(),v.end());
            ite=s.begin()+i;
            s.insert(ite,num);
            res.push_back(s);
        }
    }
};


