class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]){
            i++;
        }
        return first.substr(0, i);
    }
};



// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return "";
//         string prefix = strs[0]; 
//         for (int i = 1; i < strs.size(); i++) {
//             while (strs[i].find(prefix) != 0) {
//                 prefix = prefix.substr(0, prefix.size() - 1);
//                 if (prefix.empty()) return "";
//             }
//         }
//         return prefix;
//     }
// };

