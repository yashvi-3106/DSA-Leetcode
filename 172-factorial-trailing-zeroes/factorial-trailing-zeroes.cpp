class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        return count;
    }
};


// class Solution {
// public:
//     int trailingZeroes(int n) {
//     int factorial = 1;
//         for (int i = 2; i <= n; ++i) {
//             factorial *= i;
//         }

//         int count = 0;
//         while (factorial % 10 == 0) {
//             count++;
//             factorial /= 10;
//         }

//         return count;
//     }
// };


