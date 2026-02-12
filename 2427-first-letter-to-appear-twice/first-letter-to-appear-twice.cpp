class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int,int> mp;
        char res;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) != mp.end()){
                res = s[i];
                break;
            }
            mp[s[i]]++;
        }
        return res;
    }
};