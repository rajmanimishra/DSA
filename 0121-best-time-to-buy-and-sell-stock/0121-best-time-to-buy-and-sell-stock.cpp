class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            // Aaj sell karne par profit
            int profit = prices[i] - minPrice;

            // Maximum profit update
            maxProfit = max(maxProfit, profit);

            // Minimum buying price update
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};