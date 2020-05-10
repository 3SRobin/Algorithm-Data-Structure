class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        if(pushed.size()!=popped.size()) return false;
        int pos=0;
        stack<int> s;
        for(auto i:pushed)
        {
           s.push(i);
           while(pos<popped.size()&&!s.empty()&&popped[pos]==s.top())
           {
              s.pop();
              pos++;
           }
        }
        return s.empty();
     }
};


