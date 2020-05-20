class Solution {
public:
    int findTheLongestSubstring(string s) {
        int len = 0, status = 0;
        vector<int> pos(32, -1);
        pos[0] = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a') status ^= 1 << 0;
            else if (s[i] == 'e') status ^= 1 << 1;
            else if (s[i] == 'i') status ^= 1 << 2;
            else if (s[i] == 'o') status ^= 1 << 3;
            else if (s[i] == 'u') status ^= 1 << 4;
            if (pos[status] != -1)
                len = max(len, i + 1 - pos[status]);
            else pos[status] = i+1;
        }
        return len;
    }
};   


