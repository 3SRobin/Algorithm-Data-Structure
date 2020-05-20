class Solution {
public:
    set<vector<int>> vec;
    set<vector<int>> ve;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        set<vector<int>>::iterator ite;
        if(nums.size()==0) return result;
        vector<int> v;
        v.push_back(nums[0]);
        vec.insert(v);
        for(int i=1;i<nums.size();i++)
        {
           ve.clear();
           for(ite=vec.begin();ite!=vec.end();++ite)
           Insert(*ite,nums[i]);
           vec=ve;
        }
        int size=vec.size();
        for(ite=vec.begin();ite!=vec.end();++ite)
          result.push_back(*ite);
        return result;
    }
    void Insert(vector<int> p,int a)
    {
       vector<int>::iterator it;
       for(int i=0;i<=p.size();i++)
       {
          vector<int> v=p;
          it=v.begin();
          v.insert(it+i,a);
          ve.insert(v);
       }
    }
};


