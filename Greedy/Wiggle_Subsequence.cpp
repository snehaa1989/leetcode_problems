//https://leetcode.com/problems/wiggle-subsequence/submissions/
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int size=nums.size(), u=1, d=1;
        for(int i=1; i<size; ++i){
                 if(nums[i]>nums[i-1]) u=d+1;
            else if(nums[i]<nums[i-1]) d=u+1;
        }
        return min(size, max(u, d));
    }
};
