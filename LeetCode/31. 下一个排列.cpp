class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int update=0;
       do
       {
          if(++update==2)
          break;
       }while(next_permutation(nums.begin(),nums.end()));
    }
};


