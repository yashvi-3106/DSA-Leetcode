class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        unordered_set<char> st(word.begin(),word.end());
        for(char ch : st){
            if(isupper(ch) && st.count(tolower(ch))) count++;
        }
        return count;
    }
};