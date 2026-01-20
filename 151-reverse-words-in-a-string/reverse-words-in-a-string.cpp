class Solution {
public:
    string reverseWords(string s) {
        int l = 0, r = s.size() - 1;
        // reverse entire string firzt
        while(l < r){
            swap(s[l++],s[r--]);
        }
        int i = 0, start = 0, end = 0;
        // now reverse each word and clean space
        while(i < s.size()){

            // removing spaces
            while(i < s.size() && s[i] == ' ') i++;
            if(i >= s.size()) break;
            
            if (end > 0) s[end++] = ' ';

            start = end;
            // copy characters of word
            while(i < s.size() && s[i] != ' ') s[end++] = s[i++];
            l = start , r = end - 1;
            
            //  reverse current word
            while(l < r) swap(s[l++],s[r--]);
        }
        return s.substr(0,end);
    }
};

// class Solution {
// public:
//     string reverseWords(string s) {
//         int i = 0;
//         int j = s.size() - 1;
//         while(i<j){
//             swap(s[i],s[j]);
//             i++;
//             j--;
//         }
//         string res = "";
//         for(int i = 0 ;i < s.size() ; i++){
//             string word = "";
//             while(i<s.size() && s[i]!=' '){
//                 word+=s[i];
//                 i++;
//             }
//             reverse(word.begin(),word.end());
//             if(word.size() > 0){
//                 res = res + " " + word;
//             }
//         }

//         return res.substr(1);
//     }
// };