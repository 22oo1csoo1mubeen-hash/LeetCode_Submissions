class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> temp(n);

        for(int i=0; i<n-1; i++){
            int cur_price = prices[i];
            for(int j=i+1; j<n; j++){
                if(prices[j] <= cur_price){
                    temp[i] = cur_price - prices[j];
                    break;
                }
                temp[i] = cur_price;
            }
        }
        temp[n-1] = prices[n-1];

        return temp;
    }
};