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
    int averageOfSubtree(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res = 0;
        while(!q.empty()){
            TreeNode* current = q.front();
            q.pop();
            long long sum = 0;
            int count = 0;
            queue<TreeNode*> subTree;
            subTree.push(current);
            while(!subTree.empty()){
                    TreeNode* node = subTree.front();
                    subTree.pop();
                    sum += node->val;
                    count++;
                    if(node->left) subTree.push(node->left);
                    if(node->right) subTree.push(node->right);
            }
            int average = (double)sum/count;
            if(average == current->val) res++;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
        return res;
    }
};