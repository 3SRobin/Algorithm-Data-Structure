class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int i=0,j=-1;
        vector<int> next(needle.size(),0);
        next[0]=-1;
        while(i<needle.size()-1)
        {
            if(j==-1||needle[i]==needle[j])
            {
                i++;
                j++;
                next[i]=j;
            }
            else j=next[j];
        }
        i=0;j=0;
        while(i<(int)haystack.size()&&j<(int)needle.size())
        {
            if(j==-1||needle[j]==haystack[i])
            {
                i++;
                j++;
            }
            else j=next[j];
        }
        if(j==(int)needle.size()) return i-j;
        else return -1;
    }
};


