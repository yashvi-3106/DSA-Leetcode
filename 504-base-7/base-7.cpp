class Solution {
public:
    string convertToBase7(int num) {
        int ans = 0;
        int product = 1;
        while (num != 0) {
            int rem = num % 7;
            ans = rem * product + ans;
            num /= 7;
            product *= 10;
        }
        string str = to_string(ans);
        return str;
    }
};