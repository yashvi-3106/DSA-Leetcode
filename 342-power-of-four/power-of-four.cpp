class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return true;
        if (n <= 0 || n % 4 != 0) return false;
        return isPowerOfFour(n / 4);
    }
};


// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         if (n <= 0) {
//             return false;
//         }
//         while (n > 1) {
//             if (n % 4 != 0) {
//                 return false;
//             }
//             n /= 4;
//         }
//         return true;
//     }
// };