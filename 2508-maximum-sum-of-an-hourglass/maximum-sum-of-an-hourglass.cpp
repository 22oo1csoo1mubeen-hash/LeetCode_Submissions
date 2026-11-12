
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = INT_MIN;

        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {

                int sum = 0;

                // First row
                sum += grid[i][j];
                sum += grid[i][j+1];
                sum += grid[i][j+2];

                // Middle element
                sum += grid[i+1][j+1];

                // Last row
                sum += grid[i+2][j];
                sum += grid[i+2][j+1];
                sum += grid[i+2][j+2];

                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
