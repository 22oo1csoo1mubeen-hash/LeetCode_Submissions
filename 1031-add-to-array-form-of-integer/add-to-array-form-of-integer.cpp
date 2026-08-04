class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       int n = num.size();
       int i = n-1;
       int sum = 0;
       int carry = 0;
       vector<int> temp;
       while(i>=0 || k>0 || carry){
            int last_digit = k%10;
            if(i>=0)
                sum = last_digit + num[i] + carry;
            else 
                sum = last_digit + carry;
            temp.push_back(sum%10);

            if(sum>9) carry = 1;
            else carry = 0;

            k/=10;
            i--;
       }
       reverse(temp.begin(),temp.end());

       return temp;

    }
};