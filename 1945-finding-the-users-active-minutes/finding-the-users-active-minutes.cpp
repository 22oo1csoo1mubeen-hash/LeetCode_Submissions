class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, set<int>> mpp;
        vector<int> ans(k, 0);

        for (auto it : logs) {
            mpp[it[0]].insert(it[1]);
        }

        for (auto it : mpp) {
            int uam = it.second.size();
            ans[uam - 1]++;
        }

        return ans;
    }
};