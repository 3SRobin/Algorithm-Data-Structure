class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> vec;
       int size1=nums1.size();
       int size2=nums2.size();
       int i=0,j=0;
       while(i<size1&&j<size2)
       {
          if(nums1[i]<nums2[j]) vec.push_back(nums1[i++]);
          else vec.push_back(nums2[j++]);
       }
       while(i<size1) vec.push_back(nums1[i++]);
       while(j<size2) vec.push_back(nums2[j++]);
       if((size1+size2)%2) return vec[(size1+size2)/2];
       else return (double)(vec[(size1+size2)/2]+vec[(size1+size2)/2-1])/2;
    }
};


