/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> que;
        if( root != nullptr) que.push(root);
        vector<vector<int>> res;
        while (!que.empty()) {
            int size = que.size();
            vector<int> temp;
            for (int i = 0; i < size; ++i) {
                Node* tNode = que.front();
                que.pop();
                temp.push_back(tNode->val);
                for (int j = 0; j < tNode->children.size(); ++j) {
                    que.push(tNode->children[j]);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
// @lc code=end

