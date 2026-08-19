class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;
                char val = board[row][col];
                // check row
                for(int i = 0; i < 9; i++){
                    if(i != col && board[row][i] == val) return false;
                }
                // check col
                for(int j = 0; j < 9; j++){
                    if(j != row && board[j][col] == val) return false;
                }
                // check 3 * 3
                int startRow = (row/3) * 3;
                int startCol = (col/3) * 3;
                for(int i = startRow; i  < startRow + 3; i++){
                    for(int j = startCol; j < startCol + 3; j++){
                        if((i != row || j != col) && board[i][j] == val) return false;
                    }
                }
            }
        }
        return true;
    }
};