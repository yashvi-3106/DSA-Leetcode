class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        int maxOdd = INT_MIN;
        int minEven = INT_MAX;
        for (auto &str : freq) {
            if (str.second % 2 == 1) {      
                maxOdd = max(maxOdd, str.second);
            } else {                    
                minEven = min(minEven, str.second);
            }
        }
        return maxOdd - minEven;
    }
};


// class Solution {
// public:
//     int maxDifference(string s) {
//         int freq[26] = {0};

//         for (char c : s) {
//             freq[c - 'a']++;
//         }

//         int maxOdd = INT_MIN;
//         int minEven = INT_MAX;

//         for (int i = 0; i < 26; i++) {
//             if (freq[i] == 0) continue;

//             if (freq[i] % 2 == 1) {        
//                 maxOdd = max(maxOdd, freq[i]);
//             } else {                       
//                 minEven = min(minEven, freq[i]);
//             }
//         }

//         return maxOdd - minEven;
//     }
// };
