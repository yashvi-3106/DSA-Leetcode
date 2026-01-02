class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char str : s){
            freq[str]++;
        }
        vector<pair<char,int>> vec(freq.begin(),freq.end());
        sort(vec.begin(),vec.end(), [](auto &a, auto&b) {
            return a.second > b.second;
        });

        string ans ="";
        for(auto &p : vec){
            ans.append(p.second,p.first);
        }
        return ans;
    }
};