class Solution {
public:
    int reverseDegree(string s) {
        int res = 0;

        for(int i = 0; i < s.size(); i++){
            int rev = 26 - (s[i] - 'a');
            res += (i + 1) * rev;
        }

        return res;
    }
};