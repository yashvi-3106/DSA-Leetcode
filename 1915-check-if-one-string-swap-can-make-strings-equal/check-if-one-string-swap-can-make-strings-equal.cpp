class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        vector<int> res;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                res.push_back(i);
            }
        }
        if(res.size() == 1) return false;
        swap(s1[res[0]],s1[res[1]]);
        return s1 == s2;
    }
};