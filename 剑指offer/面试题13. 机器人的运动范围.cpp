class Solution {
public:
    int sum=0;
    int A[4]={0,1,0,-1};
    int B[4]={1,0,-1,0};
    int movingCount(int m, int n, int k) {
    	vector<vector<int>> vec(m,vector<int>(n,0));
    	DFS(vec,0,0,k);
    	return sum;
    }
    void DFS(vector<vector<int>> &vec,int x,int y,int k)
    {
    	vec[x][y]=1;
    	sum++;
    	int n=vec.size(),m=vec[0].size();
    	for(int i=0;i<4;i++)
      {
          int sx=x+A[i];
          int sy=y+B[i];
          if(sx<0||sx>=n||sy<0||sy>=m||vec[sx][sy]==1)  continue;
          int a=sx,b=sy,sum=0;
          while(a)
          {
            sum+=a%10;
            a/=10;
          }
          while(b)
          {
            sum+=b%10;
            b/=10;
          }
         if(sum<=k) DFS(vec,sx,sy,k);
      }
    }
};


