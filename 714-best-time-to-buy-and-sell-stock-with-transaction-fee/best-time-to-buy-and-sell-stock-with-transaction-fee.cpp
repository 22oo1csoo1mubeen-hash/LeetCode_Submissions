class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {

        int cash = 0;
        int hold = -prices[0];

        for (int i = 1; i < prices.size(); i++) {

            int prevCash = cash;
            int prevHold = hold;

            // Not holding a stock
            cash = max(prevCash, prevHold + prices[i] - fee);

            // Holding a stock
            hold = max(prevHold, prevCash - prices[i]);
        }

        return cash;
    }
};