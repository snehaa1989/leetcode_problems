//https://leetcode.com/problems/gas-station/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         auto gas_sumation{0},cost_summation{0};
        auto min_index{-1};
        auto carry{0};
        for(auto i{0};i<gas.size();i++)
        {
               gas_sumation+=gas[i];
               cost_summation+=cost[i];
               gas[i]+=carry;
               carry = gas[i]-cost[i];
               if(carry < 0)
               {
                   carry=0;
                   min_index=i;
                   continue;
               }
               
               
               
         }
        
        if(gas_sumation < cost_summation) // if total gas a car can occupy is less than the total cost it needs to travel all stations then -1
            return -1;
        else
            return min_index+1;
    }
};
