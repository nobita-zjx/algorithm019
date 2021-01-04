/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty() || prices.size()==1) return 0;
        //f(n) = max(f(n -1), prices[n] - minprices)
        int minprices = prices[0];
        int cur = 0;
        for (int i = 1; i< prices.size(); ++i) {
            minprices = min(prices[i], minprices);
            cur = max(cur, prices[i] - minprices);
        }
        return cur;
    }
};
// @lc code=end

