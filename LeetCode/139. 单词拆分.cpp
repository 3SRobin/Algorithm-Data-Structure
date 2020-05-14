class Solution {
public:  
    bool update=false;
    set<int> a;
    bool wordBreak(string s, vector<string>& wordDict) {
        DFS(s,0,wordDict);
        return update;
    }
    void DFS(string s,int pos,vector<string>& wordDict)
    {
       if(pos==s.size()) 
       {
          update=true;
          return ;
       }
       if(a.find(pos)!=a.end()) return ;
       for(int i=0;i<wordDict.size();i++)
       {
          int j,len=pos;
          for(j=0;j<wordDict[i].size()&&len<s.size();j++,len++)
            if(s[len]!=wordDict[i][j]) break;
          if(j==wordDict[i].size()) DFS(s,len,wordDict);
       }
       a.insert(pos);
    }
};


