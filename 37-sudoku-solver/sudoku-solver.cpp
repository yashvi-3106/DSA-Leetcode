class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char val) {
        // Check row
        for(int i = 0; i < 9; i++) {
            if(board[row][i] == val) return false;
        }
        // Check column
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == val) return false;
        }
        // Check 3 x 3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        for(int i = startRow; i < startRow + 3; i++) {
            for(int j = startCol; j < startCol + 3; j++) {
                if(board[i][j] == val) return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board) {
        for(int row = 0; row < 9; row++) {
            for(int col = 0; col < 9; col++) {
                if(board[row][col] != '.') continue;
                // Try 1 to 9
                for(char val = '1'; val <= '9'; val++) {
                    if(isValid(board, row, col, val)) {
                        board[row][col] = val;
                        if(solve(board)) return true;
                        board[row][col] = '.';
                    }
                }
                return false;
            }
        }
        return true;
    }


    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};