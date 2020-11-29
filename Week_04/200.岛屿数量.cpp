/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
private:
    int nr = 0;
    int nc = 0;
    void dfs(vector<vector<char>>& grid, int r, int c) {
        if (r<0 || c<0 || r>=nr || c>=nc ||grid[r][c] =='0') return;
        grid[r][c] = '0';
        dfs(grid, r-1, c);
        dfs(grid, r+1, c);
        dfs(grid, r, c-1);
        dfs(grid, r, c+1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        nr = grid.size();
        if (0 == nr) return 0;
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

