//https://leetcode.com/problems/split-array-into-consecutive-subsequences/submissions/
class Solution {
public:
    bool isPossible(vector<int>& nums) {
      map<int,int> fm;
      map<int,int> hm;
        for(int i=0;i<nums.size();i++)
        {  //frequency map
            fm[nums[i]]++;
        }
        
        
        for(auto i:nums)
        {
            if(!fm[i])
                continue;
            fm[i]--;
            if(hm[i-1]>0)
            {
                hm[i-1]--;
                hm[i]++;
            }
            else if(fm[i+1] && fm[i+2])
            {
                fm[i+1]--;
                fm[i+2]--;
                hm[i+2]++;
            }
            else return false;
        }
        return true;
    }
};
