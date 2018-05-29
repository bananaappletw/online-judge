class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int buy=prices[0];
        int profit=0;
        for(int i=1; i<prices.size(); i++) {
            profit=max(profit,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        return profit;
    }
};
