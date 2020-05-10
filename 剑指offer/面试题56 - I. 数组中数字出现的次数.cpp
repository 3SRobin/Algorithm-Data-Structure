class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int res=0,a=0,b=0,flag=1;
        for(auto i:nums) res^=i;
        while((flag&res)==0) flag*=2;
        for(auto i:nums)
            if(i&flag) a^=i;
            else b^=i;
        return {a,b};
    }
};


