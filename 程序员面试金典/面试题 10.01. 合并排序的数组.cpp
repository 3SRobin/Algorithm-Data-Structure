class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
       int pos=0;
       if(n==0) return ;
       while(n--) A.pop_back();
       for(int i=0;i<A.size();i++)
       {
          if(A[i]>B[pos])
          {
             vector<int>::iterator ite=A.begin()+i;
             A.insert(ite,B[pos]);
             if(++pos==B.size()) break;
          }
       } 
       while(B.size()!=pos) A.push_back(B[pos++]);
    }
};


