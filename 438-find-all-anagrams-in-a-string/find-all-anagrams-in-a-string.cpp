class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size() < p.size()) return res;
        int n = s.size();
        vector<int> freqS(26), freqP(26);
        int k = p.size();
        for(char c : p){
            freqP[c - 'a']++;
           
        }
        for(int i = 0; i < k; i++){
            freqS[s[i]-'a']++;
        }
        if(freqP== freqS) res.push_back(0);
        for(int i = k ; i < s.size(); i++){
            freqS[s[i] - 'a']++;
            freqS[s[i - k] - 'a']--;

            if(freqS == freqP) res.push_back(i-k+1);
        }
        return res;
    }
};