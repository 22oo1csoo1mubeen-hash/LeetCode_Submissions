// if x,y is a point on the graph
// and h,k is the center of the circle
// then if (x-h)^2 + (y-k)^2 <= r^2
// we can say that the point belongs to the circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;

        for (auto q : queries) {
            int h = q[0];
            int k = q[1];
            int r = q[2];
            int count = 0;

            for (auto p : points) {
                int dx = p[0] - h;
                int dy = p[1] - k;

                if (dx * dx + dy * dy <= r * r) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};