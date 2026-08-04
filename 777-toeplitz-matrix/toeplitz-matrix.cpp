class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0; i<row-1; i++){
            for(int j=1; j<col; j++){
                if(matrix[i][j-1] != matrix[i+1][j]) return false;
            }
        }

        return true;
    }
};