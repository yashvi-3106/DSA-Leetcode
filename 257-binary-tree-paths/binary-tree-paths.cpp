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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root == nullptr) return res;
        queue<pair<TreeNode*,string>> q;
        q.push({root,to_string(root->val)});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            string path = q.front().second;
            q.pop();
            if (node->left == nullptr && node->right == nullptr) {
                res.push_back(path);
                continue;
            }
            if (node->left) {
                q.push({
                    node->left,
                    path + "->" + to_string(node->left->val)
                });
            }
            if (node->right) {
                q.push({
                    node->right,
                    path + "->" + to_string(node->right->val)
                });
            }
        }
        return res;
    }
};