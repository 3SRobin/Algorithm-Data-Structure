class Solution {
public:
	vector<string> res;
    vector<string> generateParenthesis(int n) {
        DFS("",n,0);
        return res;
    }
    void DFS(string s,int left,int right)
    {
       if(left==0&&right==0) res.push_back(s);
       if(right>0) DFS(s+')',left,right-1);
       if(left>0) DFS(s+'(',left-1,right+1);
    }
};


