class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto ch : strs){
            string key = ch;
            sort(key.begin(),key.end());
            mp[key].push_back(ch);
        }
        vector<vector<string>> res;
        for(auto ch : mp){
            res.push_back(ch.second);
        }
        return res;
    }
};