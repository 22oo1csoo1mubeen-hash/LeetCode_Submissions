class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        for (int r = 0; r < m; r++) {
            vector<int> temp;
            int i = r, j = 0;

            while (i < m && j < n) {
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(temp.begin(), temp.end());

            i = r, j = 0;
            for (int x : temp) {
                mat[i][j] = x;
                i++;
                j++;
            }
        }

        for (int c = 1; c < n; c++) {
            vector<int> temp;
            int i = 0, j = c;

            while (i < m && j < n) {
                temp.push_back(mat[i][j]);
                i++;
                j++;
            }

            sort(temp.begin(), temp.end());

            i = 0, j = c;
            for (int x : temp) {
                mat[i][j] = x;
                i++;
                j++;
            }
        }

        return mat;
    }
};