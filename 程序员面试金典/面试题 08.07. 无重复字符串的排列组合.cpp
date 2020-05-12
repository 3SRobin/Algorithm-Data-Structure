class Solution {
public:
	vector<string> vec;
    vector<string> permutation(string S) {
        string s={S[0]};
        vector<string> ve;
        vec.push_back(s);
        for(int i=1;i<S.size();i++)
        {
           ve=vec;
           vec.clear();
           for(auto j:ve)
           insert(j,S[i]);
        }
        return vec;
    }
    void insert(string a,char c)
    {
       string s;
       string::iterator ite;
       for(int i=0;i<=a.size();i++)
       {
          s=a;
          ite=s.begin()+i;
          s.insert(ite,c);
          vec.push_back(s);
       }
    }
};


