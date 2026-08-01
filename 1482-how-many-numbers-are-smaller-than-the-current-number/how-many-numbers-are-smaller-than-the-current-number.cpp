class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);

        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j])
                    count++;
            }
            temp[i]=count;
        }

        return temp;
    }
};