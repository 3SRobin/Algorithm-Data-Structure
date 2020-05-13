class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size()-1;
       for(int i=0;i<matrix.size()/2;i++)
         matrix[i].swap(matrix[n-i]);
       for(int i=0;i<matrix.size();i++)
         for(int j=0;j<i;j++)
           swap(matrix[i][j],matrix[j][i]);
    }
};


