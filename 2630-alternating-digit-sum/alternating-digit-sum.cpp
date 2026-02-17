class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0, num = 0;
        int i = 1;
        while(n > 0){
            int digit = n % 10;
            num = num * 10 + digit;
            n /= 10;
        }
        while(num > 0){
            sum += i * (num % 10);
            i *= -1;
            num /= 10;
        }
        return sum;
    }
};