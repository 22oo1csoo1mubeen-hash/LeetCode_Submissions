class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int sum = 0;

        for(int i=0; i<row; i++){
            sum+=mat[i][i];
            if(col-i-1 != i)
                sum+=mat[i][col-i-1];
        }
        return sum;
        
    }
};