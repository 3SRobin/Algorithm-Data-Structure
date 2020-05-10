class Solution {
public:
	string compressString(string S) {
		string s;
		int num = 1;
		for (int i = 1; i < S.size(); i++)
		{
			 if (S[i] != S[i - 1])
			 {
				 s.push_back(S[i - 1]);
				 s += to_string(num);
				 num = 1;
			 }
			 else num++;
		}
		s.push_back(S.back());
		s += to_string(num);
		if (s.size() >= S.size()) return S;
		else return s;
	}
};
