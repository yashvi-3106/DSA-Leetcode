class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = 0;

        while(i < s.size()){
            int j = i;
            while(j < s.size() && s[j] != ' ') j++;
            string word = s.substr(i, j - i);   
            reverse(word.begin(), word.end());
            result = result + word;         
            if(j < s.size()) result = result + " ";
            i = j + 1;
        }
        return result;
    }
};