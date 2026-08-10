class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            res.push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        sort(res.begin(), res.end());
        int ans = INT_MAX;
        for (int i = 1; i < res.size(); i++) {
            ans = min(ans, res[i] - res[i - 1]);
        }
        return ans;
    }
};