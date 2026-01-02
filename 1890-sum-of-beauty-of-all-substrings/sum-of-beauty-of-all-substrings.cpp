class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        for(int i = 0; i < s.length() ; i++){
            vector<int> freq(26,0);
            for(int j = i; j < s.length(); j++){
                freq[s[j] - 'a']++;
                int maximum = 0 , minimum = INT_MAX;
                for(int k = 0; k < 26; k++){
                if(freq[k] > 0){
                    maximum = max(maximum,freq[k]);
                    minimum = min(minimum,freq[k]);
                }
            }
            totalBeauty += (maximum-minimum);
        }
    }
        return totalBeauty;
    }
};