/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        //f(n) = max(f(n - 1), f(n - 2) + nums[i])
        int cur = 0;
        int pre = 0;
        for (int val : nums) {
            int temp = cur;
            cur = max(cur, pre + val);
            pre = temp;
        }
        return cur;
    }
};
// @lc code=end

