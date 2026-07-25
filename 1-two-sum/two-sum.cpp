class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
            int needed = target - nums[i];
            if(mpp.find(needed)!=mpp.end()){
            v.push_back(mpp[needed]);
            v.push_back(i);
            break;
            }
            mpp[nums[i]]=i;
        }

        return v;
    }
};