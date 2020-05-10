class Solution {
public:
    int res=0;
    int reversePairs(vector<int>& nums) {
        MergeSort(nums,0,nums.size()-1);
        return res;
    }
    void MergeSort(vector<int>& nums,int s,int t)
    {
        if(s>=t) return ;
        int mid=(s+t)/2;
        MergeSort(nums,s,mid);
        MergeSort(nums,mid+1,t);
        Merge(nums,s,mid,t);
    }
    void Merge(vector<int>& nums,int s,int mid,int t)
    {
        vector<int> vec(t-s+1);
        int i=s,j=mid+1,k=0;
        while(i<=mid&&j<=t)
        {
            if(nums[i]>nums[j])
            {
                vec[k++]=nums[j++];
                res+=(mid-i+1);
            }
            else vec[k++]=nums[i++];
        }
        while(i<=mid) vec[k++]=nums[i++];
        while(j<=t) vec[k++]=nums[j++];
        for(int i=0;i<vec.size();i++)
            nums[i+s]=vec[i];
    }
};


