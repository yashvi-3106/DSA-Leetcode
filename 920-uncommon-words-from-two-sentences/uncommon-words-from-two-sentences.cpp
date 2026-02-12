class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> freq1, freq2;
        vector<string> res;

        stringstream ss1(s1), ss2(s2);
        string word;

        while(ss1 >> word) freq1[word]++;
        while(ss2 >> word) freq2[word]++;

        for(auto &p : freq1){
            if(p.second == 1 && freq2[p.first] == 0)
                res.push_back(p.first);
        }

        for(auto &p : freq2){
            if(p.second == 1 && freq1[p.first] == 0)
                res.push_back(p.first);
        }

        return res;
    }
};
