// i should rewrite this code in my own way
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;

        for (int i = 0; i < l.size(); i++) {
            vector<int> temp(nums.begin() + l[i], nums.begin() + r[i] + 1);
            sort(temp.begin(), temp.end());

            int d = temp[1] - temp[0];
            bool ok = true;

            for (int j = 2; j < temp.size(); j++) {
                if (temp[j] - temp[j - 1] != d) {
                    ok = false;
                    break;
                }
            }

            ans.push_back(ok);
        }

        return ans;
    }
};
