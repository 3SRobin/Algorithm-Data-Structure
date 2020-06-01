class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res(candies.size(), false);
        int maxp = -1;
        for (auto i : candies)
            maxp = max(maxp, i);
        for (int i = 0; i < candies.size(); i++)
            if (candies[i] + extraCandies >= maxp)
                res[i] = true;
        return res;
    }
};


