class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();

        // 2D matrix: n rows, 26 columns
        vector<vector<int>> freq(n, vector<int>(26, 0));

        for(int i = 0; i < n; i++) {

            for(char ch : strs[i]) {
                freq[i][ch - 'a']++;
            }
        }

        vector<vector<string>> ans;
        vector<bool> visited(n, false);

        for(int i = 0; i < n; i++) {

            if(visited[i])
                continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < n; j++) {

                if(visited[j])
                    continue;

                if(freq[i] == freq[j]) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};