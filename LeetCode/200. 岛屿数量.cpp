class Solution {
public:
    int A[4]={0,1,0,-1};
    int B[4]={1,0,-1,0};
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++)
          for(int j=0;j<grid[i].size();j++)
            if(grid[i][j]=='1')
            {
               res++;
               DFS(grid,i,j);
            }
        return res;
    }
    void DFS(vector<vector<char>>& grid,int x,int y)
    {
        grid[x][y]='0';
        int n=grid.size(),m=grid[x].size();
        for(int i=0;i<4;i++)
        {
            int sx=x+A[i];
            int sy=y+B[i];
            if(sx>=0&&sx<n&&sy>=0&&sy<m&&grid[sx][sy]=='1')
              DFS(grid,sx,sy);
        }
    }
};


