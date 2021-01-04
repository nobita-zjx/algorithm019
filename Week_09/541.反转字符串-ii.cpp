/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int size= s.size();
        for (int i = 0; i < s.size(); i+= 2 * k) {
            int start = i;
            int end = min(i + k, size);//, s.size()
            end -= 1;
            while (start < end) {
                char temp = s[start];
                s[start++] = s[end];
                s[end--] = temp;
            }
        }
        return s;
    }
};
// @lc code=end

