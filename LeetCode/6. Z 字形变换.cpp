class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.size();
        if(numRows==1) return s;
        vector<vector<char>> ve(numRows,vector<char>(len,'0'));
        int j=0,k=0,i=0;
        bool update=false;
        while(i<len)
        {
           if(j==numRows||update)
           {
              if(j==numRows)
              j--;
              update=true;
              k++;
              j--;
              if(j==0)
              {
                 update=false;
                 continue;
              } 
              ve[j][k]=s[i++];
           }
           if(!update)
           {
              ve[j][k]=s[i++];
              j++;
           }
        }
        s.clear();
        for(int i=0;i<numRows;i++)
          for(int j=0;j<len;j++)
            if(ve[i][j]!='0')
              s.push_back(ve[i][j]);
        return s;
    }
};


