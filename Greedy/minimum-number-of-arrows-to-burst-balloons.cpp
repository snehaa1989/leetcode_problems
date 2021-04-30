class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
      sort(points.begin(),points.end(),[](vector<int> a,vector<int> b){
          return b[1]>a[1];
      });
        int arrow=1;
        int arrowpos=points[0][1];
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=arrowpos)
            {
                continue;
            }
            arrow++;
            arrowpos=points[i][1];
            
        }
      return arrow;  
    }
    
    
};
