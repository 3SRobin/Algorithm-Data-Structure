class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        DFS(candidates,0,target,{});
        return res;
    }
    void DFS(vector<int>& candidates,int pos,int target,vector<int> v)
    {
        if(target==0)
        {
            res.push_back(v);
            return ;
        }
        for(int i=pos;i<candidates.size();i++)
          if(target-candidates[i]>=0)
            {
                v.push_back(candidates[i]);
                DFS(candidates,i,target-candidates[i],v);
                v.pop_back();
            }
    }
};


