class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int maxi = 1;
        unordered_set<int> s;

        for(int i=0; i<n; i++)
            s.insert(nums[i]);

        for(auto it : s){
            if(s.find(it-1) == s.end()){
                count = 1;
                while(s.find(it+1) != s.end()){
                    count++;
                    it++;
                    maxi = max(maxi,count);
                }
            }
        }
        if(n==0) return 0;
        return maxi;
    }
};