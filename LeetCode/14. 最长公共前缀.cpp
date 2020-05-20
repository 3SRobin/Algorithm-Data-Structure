class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string s;
      bool update;
      if(strs.size()==0) return s;
      for(int i=0;i<strs[0].size();i++)
      {
         update=false;
         char a=strs[0][i];
         for(int j=0;j<strs.size();j++)
           if(strs[j][i]!=a) 
           {
              update=true;
              break;
           }
        if(update) return s;
        s.push_back(a);
      } 
      return s;
    }
};


