//https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
vector<int> ans(seq.size());
        int cnt = 0;
        for (int i = 0; i < seq.size(); i++) {
            if (seq[i] == '(') {
                if (cnt++ > 0) {
                    cnt -= 2;
                    ans[i] = 1;
                }
            } else {
                if (cnt-- <= 0) {
                    cnt += 2;
                    ans[i] = 1;
                }
            }
        }
        return ans;        
    }
};
