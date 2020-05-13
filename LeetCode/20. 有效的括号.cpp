class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        char c;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
           if(s[i]=='('||s[i]=='{'||s[i]=='[')
           S.push(s[i]);
           else
           {
              if(S.empty()) return false;
              c=S.top();
              S.pop();
              if(s[i]==')'&&c!='(') return false;
              if(s[i]==']'&&c!='[') return false;
              if(s[i]=='}'&&c!='{') return false;
           }
        }
        if(S.empty()) return true;
        else return false;
    }
};


