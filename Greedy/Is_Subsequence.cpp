//https://leetcode.com/problems/is-subsequence/
//1.to check one s
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
     for(int i=0;i<t.length();i++)
     {
         if(t[i]==s[j])
         {
             s[j]='0';
             j++;
         }
     }
      for(int i=0;i<s.length();i++)
      {
          if(s[i]!='0')
          {
              return false;
          }
      }
        return true;
    }
  //2.to check multiple s, binary search the index vector to find position of corresponding letter in s which is greater than prev.
  bool isSubsequenceMultipleString(string s,string t)  {
    unordered_map<char, vector<int>> hash; //chars -> list of indices;
        for(int i=0; i<t.length();i++) hash[t[i]].push_back(i);
        
        int prev = -1;
        for(auto c : s){
            auto it = hash.find(c);
            if(it == hash.end()) return false;
            auto vec = it->second;
            int pos = upper_bound(vec.begin(), vec.end(), prev) - vec.begin(); // find the first pos whose value is greater than prev
            if(pos == vec.size()) return false;
            prev = vec[pos];
        }
        return true;
    
    
    
  }
};
