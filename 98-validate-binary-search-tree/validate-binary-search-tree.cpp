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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr) return true;
        stack<tuple<TreeNode*, long long, long long>> st;
        st.push({root, LLONG_MIN, LLONG_MAX});
        while(!st.empty()){
            auto [node, low, high] = st.top();
            st.pop();
            if(node->val <= low || node->val >= high) return false;
            if(node->left){
                st.push({
                    node->left,low,node->val
                });
            }
            if(node->right){
                st.push({
                    node->right, node->val,high
                });
            }
        }
        return true;
    }
};