//https://leetcode.com/problems/couples-holding-hands/submissions/
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        if(row.size() <=2){
            return 0;
        }
        int i=0,swaps=0;
      //map
        vector<int> pos(row.size());
        for(size_t i = 0; i< row.size(); i++){
            pos[row[i]] = i;
        }
       while(i!=row.size())
       {
          int me = row[i];
            int myCouple = (me & 1) ? me - 1: me + 1;
          if(row[i+1]!=myCouple)
          {   swaps++;
             int neighbor = row[i+1];

                row[pos[myCouple]] = neighbor;
				
                pos[neighbor] = pos[myCouple];
              
          }
          i+=2;
       }
        
        return swaps;
    }
};
