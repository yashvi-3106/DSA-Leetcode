class Solution {
public:

    string minWindow(string s, string t) {
        unordered_map<char, int> mp, window;

        // Frequency of characters required from t
        for (char c : t) {
            mp[c]++;
        }

        int j = 0;
        int start = 0;
        int h = 0;
        int minLen = INT_MAX;

        for (int i = 0; i < s.size(); i++) {

            // Add current character to window
            window[s[i]]++;

            // Character requirement has been completely satisfied
            if (mp.count(s[i]) && window[s[i]] == mp[s[i]]) {
                h++;
            }

            // Window contains all required characters
            while (h == mp.size()) {

                // Check if current window is smaller
                if (i - j + 1 < minLen) {
                    minLen = i - j + 1;
                    start = j;
                }

                // Remove left character
                window[s[j]]--;

                // If removing it breaks a requirement
                if (mp.count(s[j]) && window[s[j]] < mp[s[j]]) {
                    h--;
                }

                j++;
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};