class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;

        for(auto it : nums){
            while(it > 0){
                int last_digit = it%10;
                if(last_digit == digit)
                    count++;
                it/=10;
            }
        }

        return count;
    }
};