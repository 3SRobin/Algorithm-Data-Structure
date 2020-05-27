class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int sum = 0, res = 0;
        map<int, int> m = { {0, 1} };
        for (auto i : A)
        {
            sum += i;
            int pos = (sum % K + K) % K;
            if (m.count(pos))
                res += m[pos];
            m[pos]++;
        }
        return res;
    }
};


