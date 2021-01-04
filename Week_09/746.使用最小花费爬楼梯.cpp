/*
 * @lc app=leetcode.cn id=746 lang=cpp
 *
 * [746] 使用最小花费爬楼梯
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //f(n) = min (f(n-1) + cost[n-1], f(n-2) + cost[n-2])
        int cur = 0;
        int pre = 0;
        for (int i = 2; i <= cost.size(); ++i) {
            int temp = cur;
            cur = min(cur + cost[i-1], pre + cost[i-2]);
            pre = temp;
        }
        return cur;
    }
};
// @lc code=end

