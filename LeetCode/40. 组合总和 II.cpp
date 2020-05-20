class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> A;
        vector<vector<int>> vec;
        sort(candidates.begin(),candidates.end());
        DFS(candidates,A,vec,0,target);
        return vec;
    }
    void DFS(vector<int>& candidates,vector<int> A,vector<vector<int>>& vec,int index,int target)
    {
       if(target==0) 
         vec.push_back(A);
       else
         for(int i=index;i<candidates.size();i++)
         {
            if(i>index&&candidates[i]==candidates[i-1])
              continue;
            if(target-candidates[i]>=0)
            {
               A.push_back(candidates[i]);
               DFS(candidates,A,vec,i+1,target-candidates[i]);
               A.pop_back();
            }
         }
    }
};


