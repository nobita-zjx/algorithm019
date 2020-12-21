/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 朋友圈
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>&M, vector<int>& visit, int i) {
        visit[i] = 1;
        for(int j = 0; j < M.size(); ++j) {
            if (M[i][j] == 1 && visit[j] == 0) {
                dfs(M, visit, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& M) {
        vector<int> visit(M.size(), 0);
        int res = 0;
        for (int i = 0; i < M.size(); ++i) {
            if (visit[i] == 0) {
                dfs(M, visit, i);
                ++res;
            }
        }
        return res;
    }
};
// @lc code=end

