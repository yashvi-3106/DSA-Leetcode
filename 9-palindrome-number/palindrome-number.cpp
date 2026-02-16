class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string res = to_string(x);
        int l = 0, r = res.size() - 1;
        string orignal = res;
        while(l < r){
            if(res[l] != res[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};