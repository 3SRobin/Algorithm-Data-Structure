class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return intervals;
        vector<vector<int>> vec;
        sort(intervals.begin(),intervals.end(),[](vector<int>& A,vector<int>& B){
            return A[0]<B[0];});
        int res=intervals[0][0],pos=intervals[0][1];
        for(int i=0;i<intervals.size();i++)
        {
           if(intervals[i][0]<=pos)
           pos=max(intervals[i][1],pos);
           else
           {
              vec.push_back({res,pos});
              res=intervals[i][0];
              pos=intervals[i][1];
           }
           if(i==intervals.size()-1)
           vec.push_back({res,pos});
        }
        return vec;
    }
};


