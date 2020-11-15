/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int hash[26] = {0};
        for ( char c : s) ++hash[c - 'a'];
        for ( char c : t) {
            if (--hash[c - 'a'] < 0) return false;
        }
        return true;
    }
};
// @lc code=end

