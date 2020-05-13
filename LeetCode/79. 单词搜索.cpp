class Solution {
public:
    bool update=false;
    int A[4]={1,0,-1,0};
    int B[4]={0,1,0,-1};
    bool exist(vector<vector<char>>& board, string word) {
      for(int i=0;i<board.size();i++)
        for(int j=0;j<board[0].size();j++)
        {
           if(board[i][j]==word[0])
           {
              board[i][j]='.';
              DFS(board,i,j,1,word);
              board[i][j]=word[0];
           }
           if(update) return true;
        }
      return false;
    }
    void DFS(vector<vector<char>>& board,int x,int y,int pos,string& s)
    {
       if(update) return ;
       if(pos==s.size())
       {
          update=true;
          return ;
       }
       for(int i=0;i<4;i++)
       {
          int sx=x+A[i];
          int sy=y+B[i];
          if(sx>=0&&sx<board.size()&&sy>=0&&sy<board[0].size()&&board[sx][sy]==s[pos])
          {
             board[sx][sy]='.';
             DFS(board,sx,sy,pos+1,s);
             board[sx][sy]=s[pos];
          }
       }
    }
};


