class Solution {
public:
    int minimumChairs(string s) {
        int chairs = 0, maxChairs = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'E'){
                chairs++;
                maxChairs = max(maxChairs,chairs);
            }else{
                chairs--;
            }
        }
        return maxChairs;
    }
};