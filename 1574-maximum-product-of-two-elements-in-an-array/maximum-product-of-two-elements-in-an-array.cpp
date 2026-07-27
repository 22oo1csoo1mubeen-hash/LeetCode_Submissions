class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int smaxi = INT_MIN;
        int m1,m2;
        
        for(int i=0; i<n; i++){
            if(nums[i]>maxi){
                smaxi = maxi;
                maxi = nums[i];
            }
            else if(nums[i]>smaxi)
                smaxi = nums[i];
        }
        for(int i=0; i<n; i++){
            if(maxi == nums[i])
                m1 = i;
            if(smaxi == nums[i])
                m2 = i;
        }

        return (nums[m1]-1)*(nums[m2]-1);
    }
};