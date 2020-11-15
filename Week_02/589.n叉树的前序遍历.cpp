/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
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
    void traversal(Node* root, vector<int>& res) {
        if(root == nullptr) return;
        res.push_back(root->val);
        for (int i = 0; i < root->children.size(); ++i)
            traversal(root->children[i], res);
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        traversal(root, res);
        return res;
    }
};
// @lc code=end

