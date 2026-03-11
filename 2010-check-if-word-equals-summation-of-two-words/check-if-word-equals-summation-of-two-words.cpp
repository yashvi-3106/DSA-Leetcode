class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int res1 = 0, res2 = 0, res3 = 0;
        for(char c : firstWord){
            res1 = res1 * 10 + (c - 'a');
        }
        for(char c : secondWord){
            res2 = res2 * 10 + (c - 'a');
        }
        for(char c : targetWord){
            res3 = res3 * 10 + (c - 'a');
        }
        if(res1 + res2 == res3) return true;
        return false;
    }
};