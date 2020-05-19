class Solution {
public:
    int countSubstrings(string s) {
        string sx="#";
        for(auto i:s)  sx=sx+i+"#";
        int sum=0,maxp=0,pos=0,dis=1;
        vector<int> get(sx.size(),0);
        for(int i=0;i<sx.size();i++)
        {
           get[i]=i<maxp?min(maxp-i,get[2*pos-i]):1;
           while(i+get[i]>=0&&i-get[i]<sx.size()&&sx[i+get[i]]==sx[i-get[i]])
           get[i]++;
           if(get[i]+i>maxp)
           {
              maxp=get[i]+i;
              pos=i;
           }
           sum+=get[i]/2;
        }
        return sum;
     }
};


