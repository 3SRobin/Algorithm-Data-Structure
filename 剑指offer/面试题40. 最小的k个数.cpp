class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        MergeSort(arr,0,arr.size()-1);
        vector<int> vec;
        for(int i=0;i<k;i++)
          vec.push_back(arr[i]);
        return vec;
    }
    void MergeSort(vector<int>& arr,int s,int t)
    {
        if(s>=t) return ;
        int mid=(s+t)/2;
        MergeSort(arr,s,mid);
        MergeSort(arr,mid+1,t);
        Merge(arr,s,mid,t);
    }
    void Merge(vector<int>& arr,int s,int mid,int t)
    {
        vector<int> v(t-s+1,0);
        int i=s,j=mid+1,k=0;
        while(i<=mid&&j<=t)
        {
            if(arr[i]>arr[j]) v[k++]=arr[j++];
            else v[k++]=arr[i++];
        }
        while(i<=mid) v[k++]=arr[i++];
        while(j<=t) v[k++]=arr[j++];
        for(int i=0;i<k;i++)  
         arr[i+s]=v[i];
    }
};
