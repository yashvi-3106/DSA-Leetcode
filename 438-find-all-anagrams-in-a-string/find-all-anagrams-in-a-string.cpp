class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size() < p.size()) return res;
        vector<int> freqP(26,0), freqS(26,0);
        int k = p.size();
        for(int i = 0; i < k; i++){
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }
        if(freqP == freqS) res.push_back(0);
        for(int i = k; i < s.size();i++){
            freqS[s[i] - 'a']++;
            freqS[s[i - k] - 'a']--;
            if(freqP == freqS) res.push_back(i - k + 1);
        }
        return res;
    }
};