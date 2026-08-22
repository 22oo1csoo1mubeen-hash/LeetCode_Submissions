class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> left;
        vector<int> right;
        int count = 0;

        for(int i=0; i<n; i++){
            if(nums[i]<pivot) left.push_back(nums[i]);
            if(nums[i]>pivot) right.push_back(nums[i]);
            if(nums[i] == pivot) count++;
        }

        while(count>0){
            left.push_back(pivot);
            count--;
        }

        for(int i=0; i<right.size(); i++)
            left.push_back(right[i]);

        return left;   
    }
};