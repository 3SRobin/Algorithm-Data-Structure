class Solution {
public:
	 static bool cmp(vector<int> &A,vector<int> &B)
   {
      if(A[0]>B[0]) return true;
      else if(A[0]<B[0]) return false;
      else return A[1]<B[1];
   }
   vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
      sort(people.begin(),people.end(),cmp);
      vector<vector<int>> res; 
      for(auto i:people)
        res.insert(res.begin()+i[1],i);
      return res; 
   }
};


