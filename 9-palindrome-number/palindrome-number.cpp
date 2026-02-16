class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ) return false;
        int res = x;
        long long reversed = 0;
        while(res > 0){
            int lastDigit = res % 10;
            reversed = reversed * 10 + lastDigit;
            res /= 10;
        }
        return reversed == x;
    }
};