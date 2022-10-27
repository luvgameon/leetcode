class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n=accounts[0].size();
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<m;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=accounts[i][j];

            }
            mx=max(mx,sum);

        }
        return mx;
        
    }
};