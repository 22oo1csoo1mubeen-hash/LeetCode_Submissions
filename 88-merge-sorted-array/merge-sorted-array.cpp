class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = nums1.size();
        int left = s-1;
        int right = n-1;
        int middle = m-1;

        while(middle>=0 && right>=0){
            if(nums1[middle] < nums2[right]){
                nums1[left--] = nums2[right--];
            }
            else{
                nums1[left--] = nums1[middle--];
            }
        }
        for(int i=0; i<=right; i++)
            nums1[i]=nums2[i];

    }
};