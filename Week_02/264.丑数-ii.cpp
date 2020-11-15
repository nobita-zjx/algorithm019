/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        int nums[1690];
        int p2 = 0, p3 = 0, p5 = 0;
        nums[0] = 1;
        for(int i = 1; i < n; ++i) {
            nums[i] = min(min(2 * nums[p2], 3 * nums[p3]), 5 * nums[p5]);
            if(nums[i] == 2 * nums[p2]) ++p2;
            if(nums[i] == 3 * nums[p3]) ++p3;
            if(nums[i] == 5 * nums[p5]) ++p5;
        }
        return nums[n - 1];
    }
};
// @lc code=end

