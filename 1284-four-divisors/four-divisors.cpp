class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;
        for (int num : nums) {
            int cnt = 0, sum = 0;
            for (int i = 1; i * i <= num; i++) {
                if (num % i == 0) {
                    int otherDivisor = num / i;
                    cnt++;
                    sum += i;
                    if (i != otherDivisor) {
                        cnt++;
                        sum += otherDivisor;
                    }
                    if (cnt > 4) break;
                }
            }
            if (cnt == 4) {
                total += sum;
            }
        }
        return total;
    }
};


// class Solution {
// public:
//     int sumFourDivisors(vector<int>& nums) {
//         int ans = 0;
//         for (int num : nums) {
//             int cnt = 0;
//             int sum = 0;
//             for (int div = 1; div * div <= num; div++) {
//                 if (num % div == 0) {
//                     int d1 = div;
//                     int d2 = num / div;
//                     if (d1 == d2) {
//                         cnt += 1;
//                         sum += d1;
//                     } else {
//                         cnt += 2;
//                         sum += d1 + d2;
//                     }
//                 }
//             }
//             if (cnt == 4)
//                 ans += sum;
//         }
//         return ans;
//     }
// };