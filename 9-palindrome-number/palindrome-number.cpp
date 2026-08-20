class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long rev = 0;
        while(temp > 0){
            int last_digit = temp%10;
            rev = rev*10 + last_digit;
            temp/=10;
        }
        if(rev == x) return true;
        else if(x<0) return false;
        else return false;
        
    }
};