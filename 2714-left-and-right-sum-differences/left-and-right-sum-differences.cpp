class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;

        for (int x : nums) {
            total += x;
        }

        int leftSum = 0;
        vector<int> ans;

        for (int x : nums) {
            int rightSum = total - leftSum - x;

            ans.push_back(abs(leftSum - rightSum));

            leftSum += x;
        }

        return ans;
    }
};