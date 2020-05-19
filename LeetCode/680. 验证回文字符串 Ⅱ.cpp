class Solution {
public:
    bool Dec(string s, int i, int j)
    {
        for (; i < j && s[i] == s[j]; i++, j--);
        return i >= j;
    }
    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        for (; i < j && s[i] == s[j]; i++, j--);
        return Dec(s, i + 1, j) || Dec(s, i, j - 1);
    }
};


