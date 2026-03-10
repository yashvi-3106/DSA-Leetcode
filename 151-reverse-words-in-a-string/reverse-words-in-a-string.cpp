class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = s.size() - 1;
        while(i<j) swap(s[i++],s[j--]);
        int k = 0, start = 0, end = 0;
        while(k < s.size()){
            while(k < s.size() && s[k] == ' ') k++;
            if(k >= s.size()) break;
            if(end > 0) s[end++] = ' ';
            start = end;
            while( k < s.size() && s[k] != ' '){
                s[end++] = s[k++];
            }
            i = start;
            j = end - 1;
            while(i < j) swap(s[i++],s[j--]);
        }
        return s.substr(0,end);
    }
};