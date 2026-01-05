class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long totalSum = 0;
        int countNeg = 0;
        int minAbs = INT_MAX;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                totalSum += abs(matrix[i][j]);
                if (matrix[i][j] < 0) countNeg++;
                minAbs = min(minAbs, abs(matrix[i][j]));
            }
        }
        if (countNeg % 2 != 0) {
            totalSum -= 2 * minAbs;
        }
        return totalSum;
    }
};
