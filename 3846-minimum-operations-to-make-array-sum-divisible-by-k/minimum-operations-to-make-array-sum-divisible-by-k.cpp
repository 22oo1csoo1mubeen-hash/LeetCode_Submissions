class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
            sum+=nums[i];
        
        while(sum%k != 0){
            sum--;
            count++;
        }

        return count;
    }
};