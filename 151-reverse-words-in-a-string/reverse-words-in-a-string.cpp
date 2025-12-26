class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        string res = "";
        for(int i = 0 ;i < s.size() ; i++){
            string word = "";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.size() > 0){
                res = res + " " + word;
            }
        }

        return res.substr(1);
    }
};