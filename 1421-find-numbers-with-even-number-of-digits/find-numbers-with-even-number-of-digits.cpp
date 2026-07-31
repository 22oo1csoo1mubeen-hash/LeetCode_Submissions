class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int actualCount = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int temp = nums[i];
            int count = 0;
            while(temp>0){
                temp/=10;
                count++;
            }
            if(count%2 == 0) actualCount++;
        }

        return actualCount;
    }
};