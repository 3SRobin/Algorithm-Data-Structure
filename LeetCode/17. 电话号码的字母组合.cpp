class Solution {
public:
	vector<string> res;
	vector<string> vec;
  void Get()
  {
     vec.push_back({ });
     vec.push_back({ });
     vec.push_back({"abc"});
     vec.push_back({"def"});
     vec.push_back({"ghi"});
     vec.push_back({"jkl"});
     vec.push_back({"mno"});
     vec.push_back({"pqrs"});
     vec.push_back({"tuv"});
     vec.push_back({"wxyz"});
  }
  vector<string> letterCombinations(string digits) {
      if(digits.empty()) return {};
      Get();
      DFS(digits,0,{});
      return res;
  }
  void DFS(string& digits,int pos,string s)
  {
      if(pos==digits.size())
      {
         res.push_back(s);
         return ;
      }
      int p=digits[pos]-'0';
      for(int i=0;i<vec[p].size();i++)
      {
         s+=vec[p][i];
         DFS(digits,pos+1,s);
         s.pop_back();
      }
  }
};


