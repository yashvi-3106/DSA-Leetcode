class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        unordered_map<char,int> mp;
        int res = 0, j = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            while(mp[s[i]] == k){
                mp[s[j]]--;
                j++;
            }
            res += j;
        }
        return res;
    }
};