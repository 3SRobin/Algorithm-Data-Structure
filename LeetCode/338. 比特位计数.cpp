class Solution {
public:
    vector<int> countBits(int num) {
        int j=0,ans=1;
        vector<int> vec;
        vec.push_back(0);
        if(num==0) return vec;
        vec.push_back(1);
        if(num==1) return vec;
        vec.push_back(1);
        if(num==2) return vec;
        vec.push_back(2);
        if(num==3) return vec;
        for(int i=4;i<=num;i++)
        {
           vec.push_back(vec[i-4*ans]+1);
           j++;
           if(j==ans*4) 
           {
              j=0;
              ans*=2;
           }
        }
        return vec;
     }
};


