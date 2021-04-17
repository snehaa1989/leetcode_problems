class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 0) return true;
        int end = nums[0];
        int idx = 0;
        while (idx <= end && idx < nums.size()) {
            end = max(end, idx + nums[idx]);
            if (end > nums.size() - 1) return true;
            idx++;
        }
        return end >= nums.size() - 1;
    }
};
