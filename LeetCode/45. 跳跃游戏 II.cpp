class Solution {
public:
    int jump(vector<int>& nums) {
        int step = 0, pos = 0, end = 0;
        for (int i = 0; i < nums.size()-1; i++)
        {
            pos = max(pos, i + nums[i]);
            if (i == end)
            {
                end = pos;
                step++;
            }
        }
        return step;
    }
};


