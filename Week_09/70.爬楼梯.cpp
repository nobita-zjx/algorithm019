/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int p = 0, q = 0, res = 1;
        for (int i = 0; i < n; ++i) {
            p = q;
            q = res;
            res = q + p;
        }
        return res;
    }
};
// @lc code=end

