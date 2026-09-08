class Solution {
public:
    int countCommas(int n) {
        if(n <= 3) return 0;
        int res = 0;
        for(int i = 1; i <= n; i++){
            string s = to_string(i);
            res += (s.length() - 1)/3;
        }
        return res;
    }
};