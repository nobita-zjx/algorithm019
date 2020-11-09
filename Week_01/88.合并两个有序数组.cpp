/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int val:nums2)
            nums1[m++] = val;
        sort(nums1.begin(),nums1.end());
    }
};
// @lc code=end

