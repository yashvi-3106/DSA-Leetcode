/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1) return root2;
        if (!root2) return root1;

        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root1, root2});

        while (!q.empty()) {
            TreeNode* f = q.front().first;
            TreeNode* s = q.front().second;
            q.pop();

            f->val += s->val;

            if (!f->left && s->left) {
                f->left = s->left;
            }
            else if (f->left && s->left) {
                q.push({f->left, s->left});
            }

            if (!f->right && s->right) {
                f->right = s->right;
            }
            else if (f->right && s->right) {
                q.push({f->right, s->right});
            }
        }

        return root1;
    }
};