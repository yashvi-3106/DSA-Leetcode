class Solution {
public:
    int countGoodSubstrings(string s) {
        int k = 3;
        int count = 0;
        unordered_map<char,int> freq;
        for(int i = 0; i < k; i++){
            freq[s[i]]++;
        }
        if(freq.size() == k) count++;
        for(int i = k; i < s.size(); i++){
            freq[s[i]]++;
            freq[s[i-k]]--;
            if(freq[s[i-k]] == 0) freq.erase(s[i-k]);
            if(freq.size() == k) count++;
        }
        return count;
    }
};