class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool foundChar = false;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                len++;
                foundChar = true;
            } else if (foundChar) {
                break;
            }
        }
        return len;
    }
};



// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int st = s.length() - 1;
//         int count = 0;
//         while(st >= 0 && s[st] == ' ') st--;
//         while(st >= 0 && s[st] != ' ') {
//             count++;
//             st--;
//         }

//         return count;
//     }
// };