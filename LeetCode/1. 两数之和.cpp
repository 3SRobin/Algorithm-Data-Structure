class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> vec;
        int n=nums.size();
		int pos=0,res;
		for(int i=0;i<n;i++)
		{
			pos=i;
			res=target-nums[i];
			for(int j=i+1;j<n;j++)
			 if(res==nums[j])
			 {
			 	vec.push_back(i);
			 	vec.push_back(j);
			 	return vec;
			 }
		 } 
		return vec;
    }
};
