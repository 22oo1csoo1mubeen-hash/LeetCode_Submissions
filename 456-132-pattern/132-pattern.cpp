
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int second = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {

            // Found the smallest number
            if (nums[i] < second) {
                return true;
            }

            // Find a possible middle number
            while (!st.empty() && nums[i] > st.top()) {
                second = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};
