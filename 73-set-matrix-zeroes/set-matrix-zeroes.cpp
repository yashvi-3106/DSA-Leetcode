class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> col(matrix[0].size(),1);
        vector<int> row(matrix.size(),1);
        for(int i = 0; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        for(int i = 0; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(row[i] == 0 || col[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};



// this approach will not work for all matrix

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         for (int i = 0; i < matrix.size(); i++) {
//             for (int j = 0; j < matrix[0].size(); j++) {
//                 if (matrix[i][j] == 0) {
//                     for (int k = 0; k < matrix[0].size(); k++) {
//                         matrix[i][k] = -1;
//                     }
//                     for (int k = 0; k < matrix.size(); k++) {
//                         matrix[k][j] = -1;
//                     }
//                 }
//             }
//         }
//         for(int i = 0; i < matrix.size();i++){
//             for(int j = 0; j < matrix[0].size();j++){
//                 if(matrix[i][j] == -1){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };
