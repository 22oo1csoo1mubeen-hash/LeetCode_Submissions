
class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {

        unordered_map<string, int> mp;

        for (auto &row : matrix) {
            string pattern = "";

            int first = row[0];

            for (int num : row) {
                pattern += (num == first) ? '0' : '1';
            }

            mp[pattern]++;
        }

        int ans = 0;

        for (auto &it : mp) {
            ans = max(ans, it.second);
        }

        return ans;
    }
};
