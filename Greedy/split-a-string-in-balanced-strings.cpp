//https://leetcode.com/problems/split-a-string-in-balanced-strings/submissions/
class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,res=0;
      for(int i=0;i<s.length();i++)
      {   
         if(s[i]=='L')
         {
             count+=(-1);
         }
       else
       {
           count+=1;
       }
       if(count==0)
       {
           res++;
       }
      }
        return res;
    }
};
