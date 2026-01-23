class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            string word = words[i];
            int l = 0, r = word.size() - 1;
            while(l < r){
                if(word[l] != word[r]) break;
                l++;
                r--;
            }
            if(l >= r){
                return word;
            }
        }
        return "";
    }
};