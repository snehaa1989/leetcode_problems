class Solution {
public:
    int jump(vector<int>& nums) {
       long long int curr=0,last=nums.size()-1,jumps=0,position=0,p=0;
        if(nums.size()==1)
        {
            return 0;
        }
        while(curr+nums[curr]<last)
        {    p=curr;
         position=0;
            for(int i=p;i<=nums[p]+p;i++)
            {    
                 if(nums[i]+i>position && i!=last)
                 {
                     position=nums[i]+i;
                     curr=i;
                 }
                
                
            }
         jumps++;
        }
        return jumps+1;
    }
};
