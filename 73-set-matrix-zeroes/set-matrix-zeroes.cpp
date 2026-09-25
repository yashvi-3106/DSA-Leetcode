class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> res;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    res.push_back({i, j});
                }
            }
        }
        for(int i = 0; i < res.size(); i++){
            int row = res[i].first;
            int col = res[i].second;
            for(int j = 0; j < matrix[0].size(); j++){
                matrix[row][j]= 0;
            }
            for(int k = 0; k < matrix.size(); k++){
                matrix[k][col] = 0;
            }
        }
    }
};