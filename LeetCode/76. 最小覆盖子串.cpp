class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> vec(256, 0);
        for (auto i : t) vec[i - 'A']++;
        int minlen = s.size(), len = 0;
        int left = 0, right = 0;
        string res="";
        while (right < s.size())
        {
            vec[s[right] - 'A']--;
            if (vec[s[right] - 'A'] >= 0) len++;
            while (len == t.size())
            {
                if (right - left + 1 <= minlen)
                {
                    minlen = right - left + 1;
                    res = s.substr(left, right - left + 1);
                }
                vec[s[left] - 'A']++;
                if (vec[s[left] - 'A'] > 0) len--;
                left++;
            }
            right++;
        }
        return res;
    }
};


