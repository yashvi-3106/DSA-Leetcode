class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        for (int i = 2; i <= n; i++) {
            string empty = "";
            int count = 1;
            for (int j = 1; j < str.length(); j++) {
                if (str[j] == str[j - 1]) {
                    count++;
                }
                else {
                    empty += to_string(count) + str[j - 1];
                    count = 1;
                }
            }
            empty += to_string(count) + str.back();
            str = empty;
        }
        return str;
    }
};