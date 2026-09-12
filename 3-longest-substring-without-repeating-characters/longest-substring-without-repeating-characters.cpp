class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i = 0;
        int len  = 0;
        for(int j = 0; j < s.size(); j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            } 
            st.insert(s[j]);
            len = max(len, j - i + 1);
        }
        return len;
    }
};