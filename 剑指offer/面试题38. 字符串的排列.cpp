class Solution {
public:
    vector<string> permutation(string s) {
    	if(s.empty()) return {};
    	vector<string> vec;
    	sort(s.begin(),s.end());
        vec.push_back(s);
    	while(next_permutation(s.begin(),s.end())) vec.push_back(s);
    	return vec;
    }
};


