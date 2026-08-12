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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;

        queue<TreeNode*> q;
        map<int, int> freq;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            freq[node->val]++;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        int maxFreq = 0;
        for (auto it : freq) {
            maxFreq = max(maxFreq, it.second);
        }
        for (auto it : freq) {
            if (it.second == maxFreq) {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};