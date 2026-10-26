class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> result(n);

        int maxi = *max_element(candies.begin(),candies.end());


        for(int i=0; i<n; i++){
            int temp_sum = candies[i]+extraCandies;
            if(temp_sum >= maxi)
                result[i] = true;
            else
                result[i] = false;
        }

        return result;
    }
};