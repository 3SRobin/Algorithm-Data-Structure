class Solution {
public:
    string minNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end(),[](int& A,int& B){
        return to_string(A)+to_string(B)<to_string(B)+to_string(A);});
      string s;
      for(auto i:nums)
        s+=to_string(i);
      return s;
    }
};
