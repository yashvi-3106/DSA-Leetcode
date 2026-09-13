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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            bool depthX = false, depthY = false;
            for(int i = 0; i < n; i++){
                TreeNode* node = q.front();
                q.pop();
                // condition 1 if they are sibiling 
                if(node->left && node->right) {
                    if((node->left->val == x && node->right->val == y) ||
                       (node->left->val == y && node->right->val == x)) {
                        return false;
                    }
                }

                // condition 2 if they are are present at this level
                if(node->val == x) depthX = true;
                if(node->val == y) depthY = true;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            if(depthX && depthY) return true;
            if(depthX && depthY) return false;
        }
        return false;
    }
};