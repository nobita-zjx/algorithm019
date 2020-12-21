/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
public:
    int nr = 0;
    int nc = 0;
    void dfs(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || row >= nr || col < 0 || col >= nc || grid[row][col] == '0') return;
        grid[row][col] = '0';
        dfs(grid, row + 1, col);
        dfs(grid, row, col + 1);
        dfs(grid, row - 1, col);
        dfs(grid, row, col - 1);
    }
    int numIslands(vector<vector<char>>& grid) {
        nr = grid.size();
        nc = grid[0].size();
        int res = 0;
        for (int i = 0; i < nr; ++i) {
            for (int j = 0; j < nc; ++j) {
                if (grid[i][j] == '1') {
                    ++res;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
};
// @lc code=end

