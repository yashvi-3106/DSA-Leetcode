class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        int count = 1;
        for(int i = 2; i <= n; i++){
            string empty = "";
            for(int j = 0; j < str.length(); j++){
                int count = 1;
                while ( j + count < str.length() && str[j] == str[j + count]) count++;
                empty += to_string(count) + str[j];
                j += count - 1;
            }
            str = empty;
        } 
        return str;
    }
};