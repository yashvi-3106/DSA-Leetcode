class Solution {
public:
    int reverseBits(int n) {
        uint32_t res = 0;
        for(int i = 0; i < 32; i++){
            res = res * 2 + (n % 2);
            n = n / 2;
        }
        return res;
    }
};