class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = nums1.size();
        vector<int> temp;
        int left = 0;
        int right = 0;

        while(left<m && right<n){
            if(nums1[left]<=nums2[right])
                temp.push_back(nums1[left++]);
            else
                temp.push_back(nums2[right++]);
        }
        while(left<m)
            temp.push_back(nums1[left++]);
        while(right<n)
            temp.push_back(nums2[right++]);

        nums1 = temp;
    }
};