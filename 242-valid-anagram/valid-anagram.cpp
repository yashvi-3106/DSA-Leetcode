class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char,int> freq;
        for(int i = 0; i < s.length(); i++){
            freq[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            freq[t[i]]--;
            if(freq[t[i]] < 0) return false;
        }
        return true;
    }
};



// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;
//         map<char,int> freq;
//         for(int i = 0; i< s.length() ; i++){
//             freq[s[i]]++;
//         }
//         map<char,int>freq1 ;
//         for(int  i = 0; i < t.size() ; i++){
//             freq1[t[i]]++;
//         }
//         return freq == freq1;
//     }
// };



// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;
//         vector<int> count(26, 0);
//         for (int i = 0; i < s.length(); i++) {
//             count[s[i] - 'a']++;
//             count[t[i] - 'a']--;
//         }

//         for (int i = 0; i < 26; i++) {
//             if (count[i] != 0) return false;
//         }

//         return true;
//     }
// };