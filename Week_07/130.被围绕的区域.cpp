/*
 * @lc app=leetcode.cn id=130 lang=cpp
 *
 * [130] 被围绕的区域
 */

// @lc code=start
class Solution {
public:
    int nr = 0;
    int nc = 0;
    void dfs(vector<vector<char>>& board, int row, int col) {
        if (row < 0 || row >= nr || col < 0 || col >= nc || board[row][col] == 'X' || board[row][col] == '1') return;
        board[row][col] = '1';
        dfs(board, row + 1, col);
        dfs(board, row, col + 1);
        dfs(board, row - 1, col);
        dfs(board, row, col - 1);
    }
    void solve(vector<vector<char>>& board) {
        if (board.size() <= 2 || board[0].size() <= 2) return;
        nr = board.size();
        nc = board[0].size();
        for (int i = 0; i < nr; ++i) {
            for (int j = 0; j < nc; ++j) {
                if (board[i][j] == 'O' && (i == 0 || j == 0 || i == nr - 1 || j == nc -1)) {
                    dfs(board, i, j);
                }
            }
        }

        for (int i = 0; i < nr; i++) {
            for (int j = 0; j < nc; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                if (board[i][j] == '1') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};
// @lc code=end

