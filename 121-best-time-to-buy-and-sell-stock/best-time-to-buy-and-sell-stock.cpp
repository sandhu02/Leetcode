class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
        return 0;  // Handle the case when the vector is empty
        }

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int currentProfit = prices[i] - minPrice;
                maxProfit = std::max(maxProfit, currentProfit);
            }
        }

        return maxProfit;
    }
};