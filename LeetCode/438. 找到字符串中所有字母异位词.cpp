class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> vec;
       if(s.size()<p.size()) return vec;
       vector<int> p1(26,0);
       vector<int> s1(26,0);
       for(int i=0;i<p.size();i++)
       {
          s1[s[i]-'a']++;
          p1[p[i]-'a']++;
       }
       if(s1==p1) vec.push_back(0);
       for(int i=p.size();i<s.size();i++)
       {
          s1[s[i-p.size()]-'a']--;
          s1[s[i]-'a']++;
          if(s1==p1) vec.push_back(i-p.size()+1);
       }
       return vec;
    }
};


