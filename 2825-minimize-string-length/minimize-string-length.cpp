class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> visited(26,false);
        int res = 0;
        for(auto c : s){
            if(visited[c - 'a'] == false){
                visited[c - 'a'] = true;
                res++;
            }
        }
        return res;
    }
};