class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left_sum = 0;
        int right_sum = 0;

        for(int i=1; i<n; i++){
            nums[i] = nums[i-1]+nums[i];
        }
        
        for(int i=0; i<n; i++){

            if(i == 0) left_sum = 0;
            else left_sum = nums[i-1];

            if(i == n-1) right_sum = 0;
            else right_sum = nums[n-1]-nums[i];

            if(left_sum == right_sum)
                return i;
        }
        return -1;
    }
};