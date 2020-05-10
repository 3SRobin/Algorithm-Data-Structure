class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()) return false;
        if(matrix[0].empty()) return false;
    	int j=0,i=matrix.size()-1;
    	while(1)
    	{
    		if(matrix[i][j]==target) return true;
    		else if(matrix[i][j]>target) i--;
    		else if(matrix[i][j]<target) j++;
     		if(i<0||j>=matrix[0].size()) break;
       }
      return false;
    }
};


