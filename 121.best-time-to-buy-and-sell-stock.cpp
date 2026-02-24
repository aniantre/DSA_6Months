/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_price = prices[0];
        int price = 0;
        int maxprofit = 0;
        int prev_price = 0;
        for (int i = 0; i < (int)prices.size(); i++)
        {
            price = prices[i];
            if (price < min_price)
                min_price = price;
            maxprofit = std::max(maxprofit, price - min_price); // compares the maxprifit (price - min_price) with previous maxprofit
        }
        return maxprofit;
    }
};
// @lc code=end
