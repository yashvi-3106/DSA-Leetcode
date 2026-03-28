class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0);

        for(char c : word1) freq1[c - 'a']++;
        for(char c : word2) freq2[c - 'a']++;

        set<char> s1(word1.begin(), word1.end());
        set<char> s2(word2.begin(), word2.end());

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return (s1 == s2 && freq1 == freq2);
    }
};