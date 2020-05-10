class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
      vector<vector<int>> vec;
      vector<int> v;
      double sum=0,left=1,right=2;
      while(left<right)
      {
         sum=(right-left+right*right-left*left)/2;
         if(sum==target-left)
         { 
            v.clear();
            for(int i=left;i<=right;i++)
            v.push_back(i);
            vec.push_back(v);
            right++;
         }
         else if(sum<target) right++;
         else left++;  
      }
      return vec;
    }
};


