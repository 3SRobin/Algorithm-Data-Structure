class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max=0,left=0,right=height.size()-1;
        while(left<right)
        {
            int res=min(height[left],height[right])*(right-left);
            Max=max(Max,res);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return Max;
    }
};


