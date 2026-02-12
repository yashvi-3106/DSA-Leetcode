class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> freq1;
        for(string s : words1) freq1[s]++;

        unordered_map<string, int> freq2;
        for(string s : words2) freq2[s]++;

        int count = 0;
        for(auto &p : freq1){
            if(p.second == 1 && freq2[p.first] == 1) count++;
        }
        return count;
    }
};