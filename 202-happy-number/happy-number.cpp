class Solution {
public:
    int squareSum(int k){
        int sum = 0;
        while(k > 0){
            int digit = k % 10;
            sum += digit * digit;
            k /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);       
            n = squareSum(n);  
        }
        return n == 1;
    }
};
