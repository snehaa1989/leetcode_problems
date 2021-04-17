class Solution {
public:
    vector<int> partitionLabels(string S) {
       int a[26]={0};
        int n=S.size();
        for(int i=0;i<n;i++)
        {
            a[S[i]-'a']=i;
        }
        vector<int> ans;
        int last=0;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,a[S[i]-'a']);
            if(i==maxi)
            {
                ans.push_back(i-last+1);
                    last=i+1;
            }
        }
        return ans;
    }
};
