class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int odd_index = 0;

        for(int i=0; i<n; i++){
            if(nums[i]%2 != 0){
                if(nums[odd_index]%2 != 0) continue;
                odd_index = i;
            }
            else swap(nums[i],nums[odd_index++]);
        }

        return nums;
    }
};