/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
private:
    void dfs(vector<string>& res, int n, string curstr, int left, int right) {
        if(left > n || right > n || right > left) return;
        if (left == n && right == n) {
            res.emplace_back(curstr);
            return;
        }
        if (left < n) dfs(res, n , curstr + "(", left + 1, right);
        if (right < n && right < left) dfs(res, n , curstr + ")", left, right + 1);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(res, n, "", 0, 0);
        return res;
    }
};
// @lc code=end

