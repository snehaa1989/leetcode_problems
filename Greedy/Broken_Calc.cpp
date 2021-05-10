//https://leetcode.com/problems/broken-calculator/
class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(Y<=X)
        {
            return X-Y;
        }
        else
        {
            return (Y&1)==0?1+brokenCalc(X,Y/2):1+brokenCalc(X,Y+1);
        }
    }
};
