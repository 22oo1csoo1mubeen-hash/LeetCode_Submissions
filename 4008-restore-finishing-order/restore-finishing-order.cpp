class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = friends.size();
        int m = order.size();
        unordered_set<int> st;
        vector<int> temp;

        for(int i=0; i<n; i++)
            st.insert(friends[i]);
        
        for(int i=0; i<m; i++){
            if(st.find(order[i]) != st.end())
                temp.push_back(order[i]);
        }

        return temp;
    }
};