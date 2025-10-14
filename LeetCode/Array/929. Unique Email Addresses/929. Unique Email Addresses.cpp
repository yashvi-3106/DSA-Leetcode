class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int>mp;
        for (int i=0;i<emails.size();i++){
            string b="";
            int j=0;
            while (j<emails[i].size() && emails[i][j]!='@'){
                if (emails[i][j]=='+'){
                    while (emails[i][j]!='@'){j++;}
                    break;
                }
                if (emails[i][j]!='.'){b+=emails[i][j];}
                j++;
            }
            while (j<emails[i].size()){b+=emails[i][j];j++;}
            mp[b]++;
        }
        return mp.size();
    }
};


// class Solution {
// public:
//     int numUniqueEmails(vector<string>& emails) {
//         unordered_set<string> set;
//         for (string &s: emails) {
//             string temp; int i;
//             for (i=0; s[i]!='@'; i++) {
//                 if (s[i]=='+') break;
//                 else if (s[i] == '.') continue;
//                 temp.push_back(s[i]);
//             }
//             while (s[i]!='@') i++;
//             temp += s.substr(i);
//             set.insert(temp);
//         }
//         return set.size();
//     }
// };