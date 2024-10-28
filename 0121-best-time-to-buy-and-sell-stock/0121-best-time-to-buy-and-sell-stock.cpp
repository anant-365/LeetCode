class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = 0;
        int mini = prices[0];
        int max_profit = 0;
        for(int i=0; i<prices.size(); i++){
            cost = prices[i]-mini;
            max_profit = max(max_profit, cost);
            mini = min(mini, prices[i]);
        }
        return max_profit;
    }
};