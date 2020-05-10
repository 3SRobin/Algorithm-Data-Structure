class Solution {
public:
    bool update=false;
    int A[4]={1,0,-1,0};
    int B[4]={0,-1,0,1};
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
            {
                if(word[0]!=board[i][j]) continue;
                board[i][j]='0';
                DFS(board,word,1,i,j);
                board[i][j]=word[0];
                if(update) return update;
            }
        return update;
    }
    void DFS(vector<vector<char>>& board,string& word,int pos,int x,int y)
    {
        if(update) return ;
        if(pos==word.size()) update=true;
        for(int i=0;i<4;i++)
        {
            int sx=x+A[i];
            int sy=y+B[i];
            if(sx<0||sx>=board.size()||sy<0||sy>=board[0].size())
                continue;
            if(word[pos]==board[sx][sy])
            {
                board[sx][sy]='0';
                DFS(board,word,pos+1,sx,sy);
                board[sx][sy]=word[pos];
            }
        }
    }
};


