class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        if(matrix[0].empty()) return false;
        int i=matrix.size()-1,j=0;
        while(i>=0&&j<matrix[0].size())
        {
            if(target==matrix[i][j]) return true;
            else if(matrix[i][j]<target) j++;
            else if(matrix[i][j]>target) i--;
        }
        return false;
    }
};


