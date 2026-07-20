class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freqP(26), freqS(26);
        int k = p.size();
        vector<int> res;
        if(s.size() < p.size()) return res;
        for(int i = 0; i < p.size(); i++) freqP[p[i] - 'a']++;
        for(int i = 0; i < k; i++) freqS[s[i] - 'a']++;
        if(freqP == freqS) res.push_back(0);
        for(int i = k; i < s.size(); i++){
            freqS[s[i] - 'a']++;
            freqS[s[i-k] - 'a']--;

            if(freqS == freqP) res.push_back(i - k + 1);
        }
        return res;
    }
};