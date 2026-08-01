//brute force -> two loops
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp = nums;
        unordered_map<int,int> mpp;
        sort(temp.begin(),temp.end());

        for(int i=0; i<n; i++){
            if(mpp.find(temp[i]) == mpp.end())
                mpp[temp[i]] = i;
        }

        for(int i=0; i<n; i++)
            nums[i] = mpp[nums[i]];

        return nums;
        }
};