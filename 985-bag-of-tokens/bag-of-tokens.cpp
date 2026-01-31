class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int l = 0, r = tokens.size() - 1;
        int count = 0, maxScore = 0;
        while(l <= r){
            if(tokens[l] <= power){
                power -= tokens[l++];
                count++;
                maxScore = max(maxScore , count);
            }else if(count > 0){
                power += tokens[r--];
                count--;
            }else{
                break;
            }
        }
        return maxScore;

    }
};