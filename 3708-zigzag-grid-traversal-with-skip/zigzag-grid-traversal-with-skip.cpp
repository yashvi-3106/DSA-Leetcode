class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;  

        for (int row = 0; row < n; row++) {
            if (row % 2 == 0) {
                //even row: left to right
                for (int col = 0; col < m; col++) {
                    if (count % 2 == 0) {
                        ans.push_back(grid[row][col]);
                    }
                    count++;
                }
            } else {
                // odd row: right to left
                for (int col = m - 1; col >= 0; col--) {
                    if (count % 2 == 0) {
                        ans.push_back(grid[row][col]);
                    }
                    count++;
                }
            }
        }

        return ans;
    }
};