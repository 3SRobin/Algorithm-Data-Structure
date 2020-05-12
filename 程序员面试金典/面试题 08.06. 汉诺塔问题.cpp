class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
        Move(A.size(),A,B,C);
    }
    void Move(int n,vector<int>& A, vector<int>& B, vector<int>& C)
    {
        if(n==1)
        {
            C.push_back(A.back());
            A.pop_back();
            return ;
        }
        Move(n-1,A,C,B);
        C.push_back(A.back());
        A.pop_back();
        Move(n-1,B,A,C);
    }
};


