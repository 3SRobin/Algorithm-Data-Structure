class Solution {
public:
    int trap(vector<int>& height) {
      int sum=0,pos=0;
      while(pos<height.size())
      {
         int left=0,right=0;
         for(int i=pos;i>=0;i--)
           left=max(height[i],left);
         for(int i=pos;i<height.size();i++)
           right=max(height[i],right);
         sum+=min(left,right)-height[pos++];
      }
      return sum;
   }
};


