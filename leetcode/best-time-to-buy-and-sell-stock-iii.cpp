class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2)
            return 0;
        int dp[3][n];
        for(int i=0; i<n; i++)
            dp[0][i]=0;

        for(int t=0; t<3; t++)
            dp[t][0]=0;

        for(int t=1; t<=2; t++) {
            int profit=prices[0];
            for(int i=1; i<n; i++) {
                profit=min(profit,prices[i-1]-dp[t-1][i-1]);
                dp[t][i]=max(dp[t][i-1],prices[i]-profit);
            }
        }
        return dp[2][n-1];
    }
};
