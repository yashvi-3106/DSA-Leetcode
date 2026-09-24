class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n - 1;
        int top = 0, bottom = m - 1;
        vector<int> res;
        int count = 0;
        while (count < m * n) {
            for (int i = left; i <= right && count < m * n; i++) {
                res.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for (int i = top; i <= bottom && count < m * n; i++) {
                res.push_back(matrix[i][right]);
                count++;
            }
            right--;
            for (int i = right; i >= left && count < m * n; i--) {
                res.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;
            for (int i = bottom; i >= top && count < m * n; i--) {
                res.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return res;
    }
};