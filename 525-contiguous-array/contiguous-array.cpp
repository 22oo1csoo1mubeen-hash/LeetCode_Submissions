class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        int sum = 0;
        int maxi = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] == 0) nums[i]=-1;
            sum+=nums[i];

            if(sum == 0) maxi = i+1;

            if(mpp.find(sum) != mpp.end())
                maxi = max(maxi,i-mpp[sum]);
            
            if(mpp.find(sum) == mpp.end())
                mpp[sum]=i;
        }

        return maxi;
        
    }
};