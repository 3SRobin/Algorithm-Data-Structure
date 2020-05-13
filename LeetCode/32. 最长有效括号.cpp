class Solution {
public:
    int longestValidParentheses(string s) {
        int maxans=0;
        stack<int> a;
        a.push(-1);
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(') a.push(i);
           else if(s[i]==')')
           {
              a.pop();
              if(a.empty()) a.push(i);
              else maxans=max(i-a.top(),maxans);
           }
        }
        return maxans;
    }
};


