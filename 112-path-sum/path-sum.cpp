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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        queue<pair<TreeNode*,int>> q;
        q.push({root,targetSum});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int sum = q.front().second;
            q.pop();
            sum -= node->val;
            if(node->left == nullptr && node->right == nullptr){
                if(sum == 0) return true;
            }
            if(node->left) q.push({node->left,sum});
            if(node->right) q.push({node->right,sum});
        }
        return false;
    }
};