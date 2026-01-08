class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        for (int i = 0; i < 256; i++) hash[i] = -1;
        int left = 0, right = 0, maxLen = 0;
        while (right < s.length()) {
            if (hash[s[right]] != -1) {
                if (hash[s[right]] >= left) {
                    left = hash[s[right]] + 1;
                }
            }
            int length = right - left + 1;
            maxLen = max(maxLen, length);
            hash[s[right]] = right;
            right++;
        }
        return maxLen;
    }
};

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int maxLen = 0;
//         for (int i = 0; i < s.length(); i++) {
//             int hash[256] = {0};   
//             for (int j = i; j < s.length(); j++) {
//                 if (hash[s[j]] == 1) break;
//                 hash[s[j]] = 1;
//                 int length = j - i + 1;
//                 maxLen = max(maxLen, length);
//             }
//         }
//         return maxLen;
//     }
// };


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         map<char, int> mp;
//         int maxLen = 0;
//         int n = s.size();
//         int l=0, r=0;
//         while(r<n){
//             if(mp.find(s[r]) == mp.end()  or mp[s[r]] < l){
//                 int len = r-l+1;
//                 maxLen = max(maxLen, len);
//                 mp[s[r]] = r;                
//             }
//             else{
//                 l = mp[s[r]] + 1;
//                 mp[s[r]] = r;
//             }
//             r++;
//         }
//         return maxLen;
//     }
// };

