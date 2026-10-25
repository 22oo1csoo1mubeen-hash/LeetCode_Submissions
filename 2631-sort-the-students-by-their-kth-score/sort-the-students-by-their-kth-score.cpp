//selection sort for sorting in descending order
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();

        for (int i=0; i<n-1; i++) {
            int maxi = i;

            for (int j=i+1; j<n; j++) {
                if (score[j][k] > score[maxi][k]) {
                    maxi = j;
                }
            }

            //we can directly swap rows
            swap(score[i], score[maxi]);
        }

        return score;
    }
};
