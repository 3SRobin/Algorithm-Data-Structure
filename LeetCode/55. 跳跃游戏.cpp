class Solution {
public:
    bool canJump(vector<int>& nums) {
        int Maxpos=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i<=Maxpos) Maxpos=max(Maxpos,i+nums[i]);
            if(Maxpos>=nums.size()-1) return true;
        }
        return false;
    }
};


