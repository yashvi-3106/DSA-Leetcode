class Solution {
public:
    int longestSubstring(string s, int k) {
        int maximum = 0;
        for(int i = 0;i < s.length(); i++){
            unordered_map<int,int> mp; 
            int count = 0;

            for(int j = i; j < s.length(); j++){
                mp[s[j] - 'a']++;
                if(mp[s[j] - 'a']==k){
                    count++;
                }
                if(count == mp.size()){
                    maximum = max(maximum,j - i + 1);
                }
            }
        }
        return maximum;
    }
};