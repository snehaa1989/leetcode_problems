//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/
class Solution {
public:
    int minAddToMakeValid(string S) {
        int left = 0, right = 0;
        for (int i = 0; i < S.length(); ++i) {
            if (S[i] == '(') {
                right++;
            } else if (right > 0) {
                right--;
            } else {
                left++;
            }
        }
        return left + right;
        
    }
};
