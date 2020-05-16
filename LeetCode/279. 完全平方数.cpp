class Solution {
public:
	int res=INT_MAX;
    int numSquares(int n) {
       int p=sqrt(n);
       DFS(n,p,0);
       return res;
    }
    void DFS(int n,int p,int ans)
    {
       if(n==0) res=min(res,ans);
       else 
       {
          for(int i=p;i>=1;i--)
          {
             if(i*i>n) continue;
             if(ans+1>res) return;
             DFS(n-i*i,i,ans+1);
          }
       }
    }
};


