class Solution {
public:
    string multiply(string num1, string num2) {
        bool update = true;
        vector<int> v1;
        vector<int> v2;
        for (int i = num1.size() - 1; i >= 0; i--)
            v1.push_back(num1[i]-'0');
        for (int i = num2.size() - 1; i >= 0; i--)
            v2.push_back(num2[i]-'0');
        int len1 = num1.size(), len2 = num2.size();
        vector<int> v3(len1 + len2, 0);
        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                v3[i + j] += v1[i] * v2[j];
                if (v3[i + j] >= 10)
                {
                    v3[i + j + 1] += v3[i + j] / 10;
                    v3[i + j] %= 10;
                }
            }
        }
        num1.clear();
        for (int i = v3.size() - 1; i >= 0; i--)
        {
            if (v3[i] != 0) update = false;
            if (!update) num1.push_back(v3[i] + '0');
        }
        if (num1.empty()) num1.push_back('0');
        return num1;
    }
};


