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

    bool sameTree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr) return true;
        if(root == nullptr || subRoot == nullptr) return false;

        if(root->val != subRoot->val) return false;

        return sameTree(root->left, subRoot->left) &&
               sameTree(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr) return false;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if(node->val == subRoot->val) {
                if(sameTree(node, subRoot))
                    return true;
            }
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        return false;
    }
};