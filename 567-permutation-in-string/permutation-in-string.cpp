class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> freqS1(26, 0), freqS2(26, 0);
        int k = s1.size();
        for(char c : s1) freqS1[c - 'a']++;
        for(long long i = 0 ; i < k; i++){
            freqS2[s2[i] - 'a']++;
        }
        if(freqS1 == freqS2) return true;
        for(long long i = k; i < s2.size(); i++){
            freqS2[s2[i] - 'a']++;
            freqS2[s2[i - k] - 'a']--;

            if(freqS1 == freqS2) return true;
        }
        return false;
    }
};