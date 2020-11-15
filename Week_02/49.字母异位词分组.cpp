/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<int, vector<string>> hashMap;
        unsigned int mul, add;
        for (string s : strs) {
            mul = 1;
            add = 0;
            for (char c : s) {
                mul *= c;
                add += c;
            }
            hashMap[mul + add].push_back(s);
        }
        for (auto val : hashMap)
            res.push_back(val.second);
        return res;
    }
};
// @lc code=end

